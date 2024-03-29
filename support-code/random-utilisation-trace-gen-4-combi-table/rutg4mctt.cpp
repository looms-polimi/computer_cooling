#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

using namespace std;

// C stuff --------------------------------------------------------------------

char* strip_file_name(char* path)
{
   for(size_t i=strlen(path)-1;i;i--)  
   {
      if (path[i]=='/')
         return &path[i+1];
   }
   return path;
}

float frand(void)
{
   return (float)(rand())/(float)(RAND_MAX);
}

// C++ stuff ------------------------------------------------------------------

class prbs01
{
protected:
      float period;
      float switch_prob;
      float time_last_switch;
      float output;
   
public:
   prbs01(float period, float switch_prob)
   {
      this->period = period;
      this->switch_prob = switch_prob;
      time_last_switch = 0;
      output = frand()>=switch_prob ? 1 : 0;
   }
   
   virtual float get_val(float time)
   {
      float foo = frand();
      if(time>=time_last_switch+period & foo<=switch_prob/100) //FIXME
      {
         output = output>0? 0 : 1;
         time_last_switch = time;
         
         //printf("%f %f %f SWITCH\n",time,foo,switch_prob);
      }
      return output;
   }

};

extern "C" double get_prbs01(prbs01* p, float time) // wrapper function
{
        return p->get_val(time);
}

// Main program ---------------------------------------------------------------

int main(int argc, char* argv[])
{
   // Minimal input checking --------------------------------------------------
   if (argc<4)
   {
      printf("Random utilisation trace generator for Modelica combi time table\n");
      printf("Usage: %s out_file_name duration timestep\n",
             strip_file_name(argv[0]));
      return(-1);
   }
   float duration;
   if((duration=atof(argv[2]))<=0)
   {
     printf("Invalid duration specified, exiting\n");
     return(-1);
   }
   float timestep;
   if((timestep=atof(argv[3]))<=0)
   {
     printf("Invalid timestep specified, exiting\n");
     return(-1);
   }
   char* fname=argv[1];
   FILE* h = fopen(fname,"w");
   if(h==NULL)
   {
     printf("Could not create %s, exiting\n",fname);
     return(-1);
   }
   printf("Created %s\n",fname);
   
   // Initialisation ----------------------------------------------------------
   unsigned long ndata = ceil(duration/timestep);
   printf("Generating %f seconds at timestep %f, %lu data points\n",
          duration,timestep,ndata);
          
   prbs01 p1(20,0.1);
   prbs01 p2(5,0.2); 
   prbs01 p3(1,0.4); 
   prbs01 p4(0.1,0.6);
   
   //time_t t;
   srand(time(NULL));
   float rndval = 0;
   float pole = 0.5; 
   
   // Main loop ---------------------------------------------------------------

   fprintf(h,"#1\n");
   fprintf(h,"double data(%lu,2)\n",ndata);
   
   int i;
   for(i=0;i<ndata;i++)
   {
      float sim_time = (float)i*timestep;
      
      float seq1 = get_prbs01(&p1,sim_time);
      float seq2 = get_prbs01(&p2,sim_time);
      float seq3 = get_prbs01(&p3,sim_time);
      float seq4 = get_prbs01(&p4,sim_time);
      
      float krunz = frand();
      printf("%f\n",krunz);
      
      float seqval  = 0.3*seq1+0.2*seq2+0.2*seq3+0.2*seq4;
      float drndval = 0.2*krunz;
      rndval = pole*rndval+(1-pole)*drndval;
      
      float val = fmax(0,fmin(1,seqval+rndval));
      
      fprintf(h,"%f,%f\n",sim_time,val);
      
      //fprintf(h,"%f,%f,%f,%f,%f\n",sim_time,val,seq1,seq2,seq3);
      
   }
   
   // Clean up and exit -------------------------------------------------------
   if(h!=NULL)
   {
     printf("Data written to %s\n",fname);
     fclose(h);
     return(0);
   } else {
     printf("Error writing to %s\n",fname);
     return(-1);
   }
}
