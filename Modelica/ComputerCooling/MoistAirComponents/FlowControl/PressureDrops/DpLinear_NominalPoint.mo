within ComputerCooling.MoistAirComponents.FlowControl.PressureDrops;

model DpLinear_NominalPoint
  extends BaseClasses.TwoPort_pwhx;
  replaceable model medium = Media.MoistAir;
  medium air;
  
  parameter PressureDifference dp_nom = 1000;
  parameter VolumeFlowRate q_nom = 0.1;
  
protected 
  parameter Real k = (q_nom * 1.29) / dp_nom;
equation
  air.p = pwhx_a.p;
  air.h = pwhx_a.h;
  air.x = pwhx_a.x;
  
  0 = wa + wb;  //no mass storage
  //wa = k * dp;  //flow directed by nominal point
  wa = ((q_nom * air.d) / dp_nom) * dp;
  
  hob = hia;  //no change in enthalpy
  hoa = hib;
  
  xob = xia;  //no change in mass fraction
  xoa = xib;
  
  annotation(
    Icon(graphics = {Text(origin = {0, 44}, extent = {{-62, 30}, {62, -30}}, textString = "linear"), Bitmap(extent = {{-100, -20}, {100, 20}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAASAAAABACAYAAAC6AKpuAAAACXBIWXMAAAsSAAALEgHS3X78AAAE6ElEQVR4nO3dj1EUMRTH8RcbgA60A7EDO5AOPDrADuhAOxAr8OiADsQOpAOsIE703ZiDZXeTTfKy7Pczs4Mjt3e5QH73kv2DExEvAGDgFZ0OwAoBBMAMAQTADAEEwAwBBMAMAQTADAEEwAwBBMAMAQTAjPOeE6EB2KACAmCGAAJghgACYIYAAmCGAAJghgACYIYAekGcc7se341z7sw5d9pBU46ENjnnzjtq0uY8CSDnnJ+zbb3jeuOcuxaRr/q1GyF8RORWRO70313QQAzt+t5rcK9Jbm5QAb0AGjof9Z187CWEdGD/EJETEXkdBnwPIRSFz1v9rxDcl8bN2qQnZ0LPrW68927rnWdNB1IImw8DTbkRkZ33/sGimRo+Xwe+9VtE3nvv7wyaNRQ+sW/ee6qhDLm5QQCt1MRAOvipg71pCI2Ez4FJCGn1tddq7DmEUIbc3GAKtkIzw0f0+7ctF4B1KjMWPqJTsh8t116itaix8JGeprBbQAW0MgnhE2tSCT1ai5rrwntfdcBH4XOSsJvpFHZtqIA2QAfSXWL4iD6+6lGozPARXQCuVgllho/oulrT6nGLCKCVSJhCPKfaUagF4XNQ5SjUo6NwOZpPYbeGKdgKLPgUH1JsAXjiKFyOYgvAMxbCU5gs5q9JsaNg6Evh8DlYHEKZa1FzLA6hwuFzcC8i51anD7xYIYDY/m0icqV/K7/kFn5hT3P6OCyCJrbjV+Ljd5ntOtX3Nfd1wmMfEh5/nfs7KSKXiX1wW+FnPrZdMd7+b6wB1Ze1jpDxKf7Je/8mfE3YJ3kBOKPy+Tt90e33zH3CofB9Rp+F6eDnhF3CEbjQrm8pr4OCtp7A8VapAoqrk7OZ7UitfHYl9x9p11lilXVU/S3df6Jt1wnP+/D4Z5G4PxVQqTG39Q446oy6ATT4iz/QhtQpxGB4ZITQ5US7zhKnUfuh8Micvo2G0NLwyXweAqjEmNt6Bxx1Rv0AKj0ARiuXjBAaXHvJCJ/RNZxSIaTPsy/R99Fzpn4AEEBLxtzWO+CoM9oE0OBAKPUpPvCeFoVH6fCJnjc1hI6msEv3n2hbanATQLljbusdcNQZ7QLosO18xfCJ3ldWiJSqoEbalVXB1JjGDbStVggRQHE/b70DjjqjfQD5xMPAyeETvbfUEEo9PD26hjTRttQArho+UbtqhBABFG2ciFhBryfCzbwdRY7FF5QWuJxjCGcwd45LMSrp9VKACmcwF7uavXAIcTV7Q1wN3xkdlBcFWlX0U1yf570+71JFb6Whl2CknEj5nHA5xznh0z8qoMoWXstVbQqxsBKqekfDhdUjdzQ0QAXUKR2kKZchHNzUXL+IKqGbxF2r3051QfVI+KwMAdRARgg1mUKE5w+vk3AtVLN7OWeE0CfCZ30IoEaiELqfeMXmn+L6elMhdN/6RvIaQu9mBHdYi/rSqFkoiDWgxnr+szAjR6FMD2dPrKNVv6c0prEGtBIjR6HMpxDPHIUyP5dmZApL+KwcFZCRR5VQVwMpOgrV1Yl80YmUp5Z/3BBPcUvWFdIQCgNp31vrnXNhcfq2t3NptM/eED4vAwEEwAxrQADMEEAAzBBAAMwQQADMEEAAzBBAAMw4vU0kADRHBQTADAEEwAwBBMAMAQTADAEEwAwBBMAMAQTADAEEwAwBBMCGiPwB7cnW+YcNdzQAAAAASUVORK5CYII=")}));
end DpLinear_NominalPoint;
