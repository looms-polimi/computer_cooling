within ComputerCooling.HeatTransfer;

package StreamSeparators
  extends Modelica.Icons.Package;





  annotation(
    Icon(graphics = {Bitmap(extent = {{-80, -80}, {80, 80}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAS4AAACCCAYAAAD46SViAAAACXBIWXMAAAsSAAALEgHS3X78AAAPh0lEQVR4nO2dj3XcNhLGgTRwcgUnV5B1BVlXcHIF53SgVGC5gigVRK7g1hXcuoLIHawq8KoC3IMz9FFckvg3MwDJ7/fevLwXrckhCX4cDICBdc4ZAMaw1u6NMXvn3B1uEGgJCBeYxFr7aIz52Rjz1Rjz3jn3iLsFWuAnPIX1Y611Mda/EdbaOxItQ//9i/6fCjk+gw21aURc6yf2BXfOWfP376+MMd8mfqYSfaX6DLYFIi5wgXPubIx5QyI1RD36AmAIhAuM4iMq59zOGPNx4icffA7MWrvDHQTaQLjALDSiiOgLNAWECwRB9AVaA8IFokH0BVoBwgWSQPQFWgDCBbJA9AVqAuEC2SD6ArWAcIFiEH0BbSBcgAVEX0ATCBdgBdEX0ADCJYy19oHW/m0GRF9AGgiXPP82xpy2GGUg+gJSoDqEMIMqB0/GmFvn3KGiD5NIVloggfow8eeLihOoDgHmaEK4qCs17DY8UpWCRfsz8QJ+oRf1lO9lsQ8XDEWAuwIqdQ0fenW+hrzq7jGEC8zihauGkTDc+26Ud2PCTvSbnbSPUv7MHMvRsa4Urm3Ohx828u8e6W+PnM/AGHM3cv47Dp9h2zD1iySBOMY2zJ4dJQRM2p+I45yp+9iUcMWIC8N974TxNBRwCBdstv1o3iD/gmYIxNDYXnINfxKOc6JumcR9TxIBLyIzv5OIvi6uG8IFm203WjeIchulItHZw1L8yTiWT9xfM9/7ZBEYRERjxhZ9cfkM244tUbSKxUvIn2NJ5DAmDFz5rxIRmOgydsYafUG4YLFmqQFM8ZUap38pD5mjag80l0mCT8659w35w80zdUUfSo5bOkIXMRr4kXvvRYwqghCxEcCZGm90FCAU2WRHXkr+SNhjSf6LK3rRjL4QccEC7SP5RTvTHKSWRCIoXgsWrRfXmZP/4hQBrdwXhAvGLVxBsagkEq35I2Xn1PyXhAhIR18QLpiUcDkaAbvqHeyK/l/u8Y6Zc6pa9UfS/PSJm5oiIBl9QbiWa75Hxj0yzi1caxUcbn8krLpw9Y7PHn1BuBYtXMeuZyB4juovILqcadZEV3HkHKzRF4RruTYIGqI/sEsSrtaS6jH+vCfxqHK/aifnI87FEn1BuFYjXJ2xLtmrKVytTWNI8eeKfNISsCamQyScrzj6Wqtw+edIi+vH7s+ZXvBb6RyRpD+BNA1LYYFawpU8611YvLJm4ZOAvSff5l7UXIuaehLhZxURKIm+1iZcvrsUqDwyZiKFBaT9icgvFxcWmDv5XmhErbWlOsXrHgM+5/rVxJIfhnNnRV9rES76uJW+R5xVOcT9STh+dmGBmAvd5OJoxoaS6lMTi6wF7kNS9LUG4SLR5konHEs/ZFr+ZAjjMbXNx17w5srRMPoa608zZW16/24vWINrzK5KfW7FmEWis8dc8RL050JwCiK66F5G6oVvpgCgomg0WUiQ/l2XA1lVBVRKEB9n7K5kCF9IJLLFS9gfR+2kfz+/FRwrbklh5kNZfcllRv/mHlKzpZvXXAE14YN3Tn1GCiKRJF5K/khd42QPpGizjDVvcsHFEjfLoPv4beJnFzvyFPrmBfLonDuW+Jx4Tn+uXxL+yTOJ9n3guF0v4B+pPmXwlV7sybat7I8Un6lH8vJd0Y5AtmYjkR/7LGKhiGu1FVALcjCHmYR0jchmMvJacKQ1ZherRTYvLNJmeje+sg9ZIrDGCqiF0wEuxIIGMWqJRGv+SNqpy39tXlikLbX4YosiUCP6ali4XK+o5l3BxOMzjY5fkU/XBQv5W/NH0r5Pndi8sGzBuERgLRVQGyhVdJ66V7QSY+v+jNmLNMtPi0vVgWpQXfk3lBge4uvR/0XJdjDNMyXVRwc3aH+BXxXvX4w/7+h3NXimPQ38fLFDd34IF0jCN3DnnO86fpz4dx+stY80ogVeMisSHYriFevPgbqOnxR86vOJJrhefAwhXCALRF/JRIlEh4J4pfpzph21XhtjfqMpPVL4Y7/155ua7lE0jwuEsdYeaJ7S7BwgSaS3+iKB+jDx56x5X8LzuHa02HjIFSWoU+Z4xZAkEgNfvVj82Yo/Q6y11xSN9bmf2cpujica6Alvx7f1xLW09RLBYmsRaya6e+dYTQVUprWwwUR8gj+cCfJifyL8TR38SK/qW+NF2pKNPMTklfAMDUlNBNZSAZWp0u2JSyRa8yfga4pwZVVDaaKrSKH79WC5jr/4k9ayGCl/ZpaX/EFRiPhyJO1doTl2vm5hJ2vqBj1kdh3Zn29r/kwRuaTqKy3lOQZ+N47WV39ElfeR5Y+7BdLS2x2J+BP4+rBUOI3woUr0spYKqIlt466xtiruT402rx5xbe0rpvL1CVAzesmNvlqIuMZYc++A0Sf5XoayEm8ub6DR34+4zurRyxYroG7VNPK6aje3tZERLX80RlgirjVLBFABFZb5nMVH0i01prE5LYarllVrc1GE/DEUCh8G/09+TkuA3G6XtdY3vH8K1eAazvt60WVstasIwmjNXYzZSuiQm1ATXqSZHHk1tGg01o6lX62c6GXNFVBhy7cY4RoKRXR9dCWRiBavBYpW37LL46SKAEXgU7+TqD9/IcwQLlig3WSV+Ag2XmWRCIrXwkWrf53JUU+OCKy5Aips+ZYrXLNigZpC4pZUArpEBNZYARW2beFyK6/iyOGPtEUNM5eKwNoqoMIgXFyGOt7pdoodMOESgbVUQIUt31qoxzW6zRLNIt9XqLwY8udJ2Z8hz1TEb8cxVSIF1OACrVBbuGb3hqN5Q5riFePPrkIlyI7PJFgqi2XHQAVU0AI1hSu4oaXRFa9Yf7pKkG9JSDT4ShUhb2qtPxuC6AvUxHZb04/4sBPcATdKJPoI78qb7E8H7fp8Q/dr7D7+PLMyIcQzzZsr6hKiAirQhFamHEU/soEEKcci5GDiOyFhK7E7b7Y/kT7nDn6wrVfUSHSvqQIqjKXNi26CHNsgucTiWPoytuZP5ENM9Yl3Jb2iCKylAiqMrc0nzTmMtWCOi0L8a4ZdPfwi2qzuWMv+MPJEeax9K3msHJD7AgP8Iv3/+BpdrAM2iUp6QwqaGkFIza5uyp+Ir8+YJa3/zPShSvSylgqozPdkT3nlsW71mdrLrVbVUgl/Am3+nqOXg5sv75v4Q4zwoZoI5Oa+1iZcW/roa3ysF/HQl2wTD1E76qsuAlutgEojyqWrUzjLCYn7k3D87EKDixeGBTRc8URlhA9ZIoAKqCzXu7mBLY0BqWYf+lpMY2g4osHmClfXlZCowTX7FV+6cLU2dUfQnwvB0ZgChC34hVGZjBcgZzJnTHnlQp/6u/88kTCee39P9jnh3FOTrjuOVLZ8WIY79vhNTZYW9sfQ8+u3b/lJ12uPeGDp0cvaK6AmRATn1AEUocgmO/JS8kfqGifzX3ixN2A5IrDmCqiZOy8FR8GURSIoXgsWrb6NbtnXQlkb0CCoAvEC38X63e9eQ2tTL1Dojg3x3bFjQ/5I8S8v0j518eJatx6NIOIKRy9rq4BaOB0ARS/r2Y/imYi4QBBEXy/wkc7JWvtAUYAXjv9mRDY+Cf2bMeYVDTC8ziyT1Jo/kvjlQ++ttdebj0a2YJzRi1b01XDExWHYaCbdXsyBRMQFkkD0VczsDuw0DeDXxvx5V6GEesczTcO57k9PgXAJQwnd27VdF6pAZDErEh2K4hXrz4EqsmiXLP9EI4qX7Wjr3Shp63VLstdltdztckK7/6ywqxi943rPT8luWrI/7v9b/t0K38Nj6F3BzHlhfB0iY8wvvbN8oZERtZn0GmWQBzPhx0iadS88c343MbP7il7KX0b+VkJUZDPhqxevP1vxZ8j3RPnfYtbnfqYdzPFEOdJgqfImhIsa0vVgGYZ/4U81lspw+jMiXB1/0EMSL2SoWb+dq/58zZrz1LX/nelwxSLBLF5sojXFTJuf88mL3X30+1CxC7WnL3RovsmJLkq0lpaUP4GQ+hy7qWvhtYl1uybOVzzyqO3zyPk59ls4cS2Pas2fgjY/tNGZ8cFzSF/EyEVdF/SP2QvvSfsTeezZdVkM11hFBJZeAXVrbZXRT/E2L34Rgwva3FdM4+sTcZ3VRGANFVATo/G7xnoH4v4ktnmWXoZajqu1frqWPyr9/QAt7FGYmvtqdV/FNedjGX0Sz+tauuCp2jmPLCdpbGREyB9DD2ZYw0l8hCVErghYa/d0jyVqcI3xqmtv2BB2uWiNpMcUtj/khnetzUVpaAlDrAXntERcc1a3CxVQYYVdRbG5izHCNRSK6N05lEQiWrwWKFp9eygo25ssAjHiUtjw+rmv00iFAwjXQo0CHekt97JGKYJfYGWRCIrXwkWrf53J4pEqAmuvgApbhThmD69ihXs9S9otKEcE1lwBFbZt4erE4rYL82l041BwrAf6As+9MEvyR9qitnUqEQGJdYgQLlht4eIyVJVMt1PsgEmpCKytAips+dZCWZvR7Zacc0cSC+06QCF/npT9GfJMtbB2HFMlYkANLtAatYVrdo84mqOlKV4x/uwq1CXq+EyCpbI4ewhqcIFWqClcURtbKopXrD9n55xP9r9VrMntfXvrnLupubGsQfQFGsHSzO6xRrYT3Nqotd14k/3p+eWnDtzQ/Rq7j/K7+oZ9dDG/S52Fzl2Da3BsEZ/BSggkSDkWIQcT3wkJW4kNLrP9ifQ5d/Djjssv6UT30iqgwlaenKcvPWc37UtuZGNkuo1F/gjhfXpdK4+VA3JfQJtgjovE4ppeqBJ8t6FYJFrzh5EnymPta+exckDuC2gSlZynhPSetilKnQ7gBeYNV4WBFv0p5PtGnLT90rERn7JB9AU0yKrHReVObqjbNkzMPlNew89YP2hED635M/Btrh6XSt35WonukvrzSM6DObDLjzATwvWFRgvFNizoU3njiayRRwgXmAMbwuriu7XvKI+lIlq1Qe4LSADh0mF0G/HW8V1wrnxUZO4rd74b2BgQLnkeumU6C/WdLSIKRF8flzL9A9QHOa4NkJMvmkisZ8+EHzLIfT2RuP8QLuS4wBwQrg2QKgLUZfs28bPo3ahjIIE8DqeCQLjAHBCuDZAZcYmtQ4wBwgXmQI4LjILRQNAyEC4wC2bCgxaBcIEgiL5Aa0C4QDSIvkArQLhAEoi+QAtAuEAWiL5ATTAdAhRTUgUCgBwQcYFiEH0BbRBxAVYQfQENEHEBVhB9AQ0QcQExEH0BKRBxATEQfQEpEHEBFRB9AU4gXECNiIoTr1BMEMSAriJQAxVQAReIuEAVQhVQAZgDwgWqMlUBFYBJjDH/A2bsHLw7I8ETAAAAAElFTkSuQmCC")}));
end StreamSeparators;
