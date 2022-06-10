clear
x=fscanfMat('../results/xaxis.txt');
y=fscanfMat('../results/yaxis.txt');
T=fscanfMat('../results/map.txt');
T=T-273.15;

tmin=min(T);
tmax=max(T);
printf("T min=%.1f max=%.1f\n",tmin,tmax);
quantize=5;
tmin=floor(tmin/quantize)*quantize;
tmax=ceil(tmax/quantize)*quantize;

// The xaxis/yaxis files contain the points where samples have been taken,
// but we want to plot temperatures as squares with the sample point at the
// center, and grayplot takes the given poins as the lower left coordinate,
// not the center, and in addition it averages data that we don't want, so use
// Matplot even though it's more low-level
xrange=[0;x($)+x(1)];
yrange=[0;y($)+y(1)];
Tdisp=(T-tmin)./(tmax-tmin).*256;
Tdisp=flipdim(Tdisp,1);

function newticks=retick(range,dbmin,dbmax,nticks)
    lb=range(1):(range(2)-range(1))/(nticks-1):range(2);
    lc=dbmin:(dbmax-dbmin)/(nticks-1):dbmax;
    newticks=tlist(["ticks", "locations", "labels"], lc', string(lb)');
endfunction

function tmeasured=virtualsensor(T,xpoints,ypoints,x,y)
    xx=[0;xpoints+xpoints(1)];
    yy=[0;ypoints+ypoints(1)];
    dex=find(xx<=x);
    tx=dex($);
    dex=find(yy<=y);
    ty=dex($);
    tmeasured=T(ty,tx); //Swapped to map x,y to row,col
endfunction

f=gcf();
f.color_map=jetcolormap(256);
f.figure_size=[600,640]; // By trial and error, to produce a square figure
title("Temperature","fontsize",2);
Matplot(Tdisp);
ax=gca();
ax.x_ticks=retick(xrange,ax.data_bounds(1,1),ax.data_bounds(2,1),5);
ax.y_ticks=retick(yrange,ax.data_bounds(1,2),ax.data_bounds(2,2),5);
xlabel("X [um]","fontsize",2);
ylabel("Y [um]","fontsize",2);
colorbar(tmin,tmax);
ax=get("current_axes");
ax.font_size=2;

printf("  D     C     B     A\n-------------------------\n");
i=1;
for ys=8960:-2560:1280
    for xs=1280:2560:8960
        printf("%5.1f ",virtualsensor(T,x,y,xs,ys));
    end
    printf(" | %d\n",i);
    i=i+1;
end
