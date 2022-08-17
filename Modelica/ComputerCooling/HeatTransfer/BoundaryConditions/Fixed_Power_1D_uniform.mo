within ComputerCooling.HeatTransfer.BoundaryConditions;

model Fixed_Power_1D_uniform
  extends Icons.HeatSourceIcon;
  ComputerCooling.Interfaces.HeatPortVector hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {120, 1.42109e-14}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "Number of lumps";
  parameter Power P_input = 1;
equation

  for i in 1:n loop
    hp.port[i].Q_flow = -P_input/n;
  end for;

annotation(
    Icon(graphics = {Bitmap(origin = {-80, 30}, extent = {{-20, -30}, {20, 30}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAADwAAAByCAYAAAAPrrJuAAAACXBIWXMAAAsSAAALEgHS3X78AAAFA0lEQVR4nOWd/XEaMRDFV578bzoIqcDuIJRAOqCDUALpwOkgJVCC0wGpILgDXIEy8kiezaFvvdXp8G/mZpLj7tBj3xN35liU1prQKKXWRLQhonXloc9E9Ky1PsMHZwQjFyI6mMOClgN8fAOLdQtUNMzS1sZ/IQe75gvK3nfAQW2Bx5qyQR3oE2xIRCvPut9m8ik8jhH3dbKudvK7AinYh5lpDyU7KKUOHsEwkJZeBB9OcNEsbWfidWAS8WXvxZ5ElGCO/3myfWguMOvORTN4xnurmYz2RHQSeI9FLSc7xlXTiYc9kbgMLHS6XFInKrGqjlzR1HIKVdsn9nFhVY1V+zF6aqmUWtlJ5j4S+xc3WUzWr5EnCBPOgefbeCY4zqvZTmt9eV83qW7MxkbkBn31Arhg2dixhcZ98lo6cqVjXp3dYCKv8mnGGIni+0TGJynfxt4cDCD4GFgfmn8u7kVyZ1q7QG73WusTNo5tKKWeQiczdqx7z0P3VuN7hX3ZfR6wsls7tqjrApk+2cfeZjuf74eaoOw4L/ZUMrXtJqBpfRd4K3nRWpdex0pztNY8pp7Hjt28fU55E+y7EBhKrM3tg/3vr8zdfBo2octD/J9HK1FKmdx+t3u/FEyiXg1DXw/by1Fe0aSdU4z+B4Dj5O0y185BhhU8yS0V2jnIkIInuXU025lGFOzJraPZzjRohae5JZSdaTTBntw6IHamkQQHcuuA2JlGERzJLSHtTANV2Jdb/hiM2QVHcuuA2ZnmFpzILaHtTHMKTuTWAbUzzVzhWG4dUDvTXIIzcksSdqY5BGfk1gG3M/UWnJlbB9zONEOFc3JLUnamnoIzc+sQsTP1ElyQW4eInamH4MLckqSdqVOFc3PLtxdDVHBhbh1idiZJwRW5JWk7k5Tgitw6RO1MghUuza1D1M4kIbgyt9TDzoQWXJlbh7idCSm4IbcOcTsTuMK1uaVedibU/dINuXVc7H3SCMwdAkG3NAtuzK3jofEF43yLPdhkaUBu0fzUWkcnv9YMt+QWzR+tte+Wpf+oFgzILZLX3G/VVAkG5RbJLveu+GLBS8wtp6bCi8stp0jwUnPLyRa85NxysgQvPbec3AovOrecpOBbyC0nKvhWcstJXTyYrwb8aHkCxrbRKdW55UQFxy6zSlFK7Rp2b8otp9dHLY+J7xfFaM4tp9eHaS3Vbc4tp5fg2gpBcsvp8WFarZ1hueX0qHCNnaG55fQQXDNwaG450p8e1tgZnluOdIVL7SySW4604BI7i+WWI/n5cKmdxXLLkaxwiZ1Fc8uRFJxrT/HccqTuAMi1c5fccqQqnGvnLrnlSAnOqVq33HIkbnnIsXPX3HIkKpyyc/fcciQEp8R0zy0HfVNLys6z5JaDrnDMzrPlloMWHLLzrLnlIG9bitl51txykBUO2Xn23HKkG3kOkVsORHDAzsPkloOqsM/Ow+SWgxI8reRQueU0C/bYebjcchAV5nYeMrcchGAucMjcckKCs7oXTuw8Wm6DGnzNtpJNumyjridfZ8FBGo4Zp101RaOWjmn2oBfbO3IksaGOaSu3QXFPPNth0PxjO2B1wz3x7Ab7wCsS7Gdp7fw0oNhdQMtet/S1DPWWnFlssq8l37ioc2lOL+cZKpvXuZTtdPO9aZHdh3vT3n04kYOlLd75J2STj9NBfCL8Y/SI91T7Zn4FAPk7D3NQ9jsPRPQPdyDOLK8bL10AAAAASUVORK5CYII=")}));
end Fixed_Power_1D_uniform;
