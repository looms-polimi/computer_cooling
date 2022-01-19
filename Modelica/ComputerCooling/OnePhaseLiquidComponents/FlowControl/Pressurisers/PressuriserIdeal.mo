within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers;

model PressuriserIdeal
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Pressure p = 101325;
  
equation
  //pressure imposed via parameter
  pwh_a.p = p;
  pwh_b.p = p;
  
  //enthalpy
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);

annotation(
    Icon(graphics = {Bitmap(origin = {0, 40}, extent = {{-100, -60}, {100, 60}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAASAAAADHCAYAAAC5tY4OAAAACXBIWXMAAAsSAAALEgHS3X78AAAECUlEQVR4nO3di20bRxRA0ZnADbgFpwS14BpUQlJCUkJSQtyCS5BLSEqIW1AJE2xABAxhypRM4pLyOYAhCNDPI+DiaTk7O9dag+s05/TLOYO11rz5/8Qr9cP3vgBAR4CAjAABGQECMgIEZAQIyAgQkBEgICNAQOaNpb993+tOXzvFb58JCMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGcdx8FVzzndjjN/GGG/HGO92/w59GmN83t6utT5aVU7hyahX7NTzbi59HtCc8/0Y4+EZn7KF6Oe11qcL/lhXsz68nAmIl/h9jPG493nbZLRF6m73/jYhPcw5701DPMUEdMWudQI69v12H/fH3p9oW6R+XGs9funjz/BzmYBunIvQnM3uT677velom4x+ssIcI0Cc1VrrrzHGh72v+d4Kc4wAcQn7F5/vrDDHCBCX9tYKc4wAcWmfrTDHCBCXsH/dR4A4SoA4qznn4StfF92MyG0TIM5mF5+Hves+jweviMH/CBDPtrs37D9zzrs55y9jjD8PXvX69VKbEHkd3IrBS/w955Obix938TH98CQB4py2C87bvV8f1louPvNVAsRL3B8cybHtfn7c7YKGkwkQz+YOd87FRWggI0BARoCAjAABGQECMgIEZAQIyAgQkPFUjCvmqQ9Psz63zwQEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICDjqRivwKk3ZcK1MQEBGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARmP5eFf53rEjUfl8BwmICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMnOMsSw/UDABARkBAjICBGQECMgIEJARICAjQEBGgICMAAGZuZaN0EDDBARkBAjICBCQESAgI0BARoCAjAABmTeH33jOedLGoLXW9GsDxjd0wwQEZAQIyAgQkBEgICNAQEaAgIwAARkBAjIOJAMyJiAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgIONIVuCbOZIVuDkCBGQECMgIEJARICAjQEBGgICMAAEZR7ICGRMQkBEgICNAQEaAgIwAARkBAjICBGS2w4FsBAISJiAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgoDHG+Af4HJ7VeeIt1wAAAABJRU5ErkJggg==")}));
end PressuriserIdeal;

