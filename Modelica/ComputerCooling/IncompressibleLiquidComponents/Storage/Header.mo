within ComputerCooling.IncompressibleLiquidComponents.Storage;

model Header
  extends IncompressibleLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_HP;
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Volume V = 0.1;

equation
  m.p = pwh_a.p;
  m.T = T;
  dp = 0;

//energy equations (heatflow)
  der(V * m.d * m.e) = pwh_a.w * actualStream(pwh_a.h) 
                      +pwh_b.w * actualStream(pwh_b.h) 
                      +Qport;

//enthalpy
  hoa = m.h;
  hob = m.h;

annotation(
    Icon(graphics = {Bitmap(origin = {0, 30}, extent = {{-100, -70}, {100, 70}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAASAAAAC2CAYAAAB5y1BqAAAACXBIWXMAAAsSAAALEgHS3X78AAAEtElEQVR4nO3d0W0WRxiG0fki7qEDXAIdBDowFYArSEqADpIOSAd0AOmAEqADu4IvWmm5CEjEhuB3d+acG0tIFvPPjh/trnfH1d3j7Krq/ek/BNxRdz89+5zNEqDzfwi4o+6us8/ZLwcYA7AoAQJiBAiIESAgRoCAGAECYgQIiBEgIObBYlP/7ABjgP/ybpUZWupJ6BmeHGV+K61nl2BAjAABMQIExAgQECNAQIwAATFLPQdk50Q4Fjsiwkl5DgjgBwgQECNAQIwAATECBMQIEBAjQECMAAExdkSE47Ej4pnYEZGZ2BER4B4IEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQI0BAjAABMQIExAgQECNAQIwAATECBMQIEBAjQECMAAExAgTECBAQ86Cq3pt+OJ8ZfnZrjNEHGMe96O5a4GNyclW1zM/kSpdgnw4wBriNZdbqSgFyqclZfFjlSK0UoLcHGAPcxptVZmmVe0CfuvviAOOAW6mqj2OMx7PP1ipnQJcHGAPcxRJrdoUAXXX3MtfUzGFfs1ezH86ZL8Fuxhgvu9u9H06rqi73e0IPZzyKM54BbeF5Pca4EB/Obl/DF/uavpntgG5nQE+/+Ld3t/zeZz9hPD/q2uUWM6uqJ2OMRwf8iN/Vjer+9xXYbZ/C9FQx8Nn3dsPLqEDMV2dAAPfFGRAQI0BAjAABMQIExAgQECNAQIwAATECBMQ8+PI/9ioGcFdexQBOR4CAGAECYgQIiBEgIEaAgBgBAmIECIixIyIQ4wwIiBEgIEaAgBgBAmIECIgRICBGgIAYAQJiBAiIsSUr8MNsyQqcjgABMQIExAgQECNAQIwAATECBMQIEBBjS1YgxhkQECNAQIwAATHbi2HvJ5n+7XNcb1+7+8MBxgP/q6p6MsZ4OsZ4tH89vS1AM96F/nuM8aq7Z4krC6uqLTavxhi/zjYLswbosz+7+/djDAXurqr+GGP8NuvUzR6gzV/d/fIA44A7qao3Y4wXM8/aCjehX1SVsyBOZV+zU8dnLHIGtLkZY1x09/UBxgLfVFXbTeaPY4yHs8/UKr+G3w7k5QHGAbdxuUJ8xmLPAbkPxFkss1ZXuQTb3HT3owOMA76pqq5XOQP66q9iTOxhVXkuiDNYIj5jPwOa4YnKdwcYA9y3Z2ef8Sm246iq7TcGjw8wFLgvn7r74uyzPctNaO9+sZopbifMEqA3BxgD3Ke3M8z2NDsiugxjIVNcfo3JngPyoCGrmGatTxOgfQ+gqwMMBX6mq5n2u5rqSeju3u4FPd/f/YKZbGv6+b7GpzHdqxjdvd2c266PXwsRE7jZ1/LFvranMv2f5dm3sfQKBmd0PfX2wmOMfwBMqur4tZQAWgAAAABJRU5ErkJggg==")}));
end Header;