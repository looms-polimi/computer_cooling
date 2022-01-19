within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Valves;

model ValveOnOff_TwoPort
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh;
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter PressureDifference dp_nom = 5e4 "nominal pressure difference at w_nom and cmd = 1";
  parameter MassFlowRate w_nom = 1 "nominal mass flow rate at dp_nom and cmd = 1";
  Modelica.Blocks.Interfaces.RealInput cmd annotation(
    Placement(visible = true, transformation(origin = {-100, 70}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-46, 90}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

protected
  final parameter Real kv = w_nom / dp_nom annotation(Evaluate = true);
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  //modulated flow
  w = if cmd <= 0 then 1e-6 else kv * dp; //minimal mass flowrate allowed for circuit modeling reasons
  
  hoa = hib;  //no changes in enthalpy
  hob = hia;

annotation(
    Icon(graphics = {Bitmap(extent = {{-100, -100}, {100, 100}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAASoAAADdCAYAAAAM2j86AAAACXBIWXMAAAsSAAALEgHS3X78AAAT8UlEQVR4nO2dsXLVuBrHpTvbQ54ANvsAZCf0y86EenOLbLvZJpQLFXSX7aACSmhuaKG4UJOZJT0ZwgMQwgsQeALdEXwOimIfyT6yLVu/30wmcOKjoyPbf/316ZOsjTEKykBrfVkpdU0pVf22/DKRL78vv18rpY7tb2PM8ch1goFAqGaO1npTKbUpwnRpZt/2owjXC2PMiwzqAz2BUM0QrfVFpdRNpdT2DMWpCStau/YHpzU/EKoZIQL1UCn1R+FN8dQKtTHmcwZ1gQT8i0acB1rruxK7KV2klLTBsbQJzAAc1cTRWq/JkOdK6W3RwDs7BDbGHGZZO4gCRzVhtNY2DvUWkVqIbZu30lYwUXBUE0VrvcswrzVPjTHbE6tz8SiEanpIwPw1Lqozdih4jUD7tGDoNyEQqSTYtnstbQkTAUc1IbTWh4lEal8Ez/58zj3QLBMGFyVp9VqibPp3xpi1BOXAACBUEyFBTGpfZgdfTH3YI25oUxJalxEtYlYTAaGaADJj9aBjTa1A3TXGvJ5p21iHdXcJwbpljHmYuFqQGIQqc2TY87ZDLb9I/lARa+BkTaN1jBc6vP1n8qzyhmB6/ux2qOFLu0NCSQt15btelu/eli5tDAOCUGWMLAFpGzy3cZfNEqff7Xe2313W+rXhCstt8oahX6ZIwPi45VDmT2MM7uBb+9kg+X9bvOWLuFDyqzIER5UvD1uK1FNE6jvSFm2c1QVpc8gQHFWGyE6cH1rU7KUMecBDa21jV7+1aJcVXFV+4KjypE1uz5eWx5fGtrRRLCxezhCEKk/aCM82DqAZaZtW7Tl0HSEMQpUZkg8Uu33wPnuFh5E22o88/JKcA8gIhCo/2twkTKnH06atEKrMQKjy41pkjfbnuiymD6StYl1V7DmAgUCoMkJm+2KHfaQitCe2zS7JuYBMQKjyok1PTmyqPW3aDFeVEQhVXsT24vvM9LVH2ix2+IejyogfSm+AzIjtxX/RWpOp2y84qozAUQFA9rCEJiNwSXlhjNGlt0Eu4KgAIHsQKgDIHoQKALIHoQKA7EGoACB7ECoAyB6ECgCyhzwqWIrY3C9ykmAZcFQAkD0IFQBkD0IFANmDUAFA9iBUAJA9CBUAZA9CBQDZg1ABQPYgVACQPQgVAGQPQgUA2YNQAUD2IFQAkD0IFQBkD0IFANmDUAFA9iBUAJA9CBUAZA9CBQDZg1ABQPYgVACQPQgVAGQPQgUA2YNQAUD2IFQAkD0/cIrq0VpfVkptKqXWlFKX5aDPSqlDpdQLY8xhbnWGvNFaX1NKbSul7O9LXmXfKaVeK6UeGmOOOZVn4ZHuHnIx3VVK/RI49KM9zhizO3glM4JHuoeRTm834pqqeKqUummM+Txy1bMBoXLQWj9USv3V8m37tpcstRdEqBajtbad3n86vPWLdV44928gVN8upotiu690LOKLuKuHiauWPQhVPVrrNXFRXa8phVh9h2D6Nx4ueUFdUEo90Fq/FpsPBSMu6u2S11R1Xb2QjrRoihcqrbUNbv6RqDgbgzjUWt9MVB5MCOuitNaHHYd6Tdige3FO3af4oZ/W+rhmBiYFRcSuGPqdhg5uJhYonx9Lng0s2lGJm+pDpBTuqgxklji1i6pjs+R2Ln3od63n8oldzRTromSW+J8eOzuXooWq6KFfj8O+OmY5M1ji0E9c1O6A147lizGm2KB66Y4q9kKzIvNIfncFdzVxEruol0qpFUnujOFC0W1fuKOK/fI/21yWDhnGTczGXZXiqLTWmzL7tqxAfZFJlhdO2cVPSIRAqCLwLxAJkN9N0MtNfmZw7jeZzOjZzum3BMW9lPN9ZmkMQhWm9KFfJ8QJrYnQLAMzgxkjLuo4gUjZdaG/GmM2Wb/XDYSqI9YFGWNsUPUWsat5IbEoOzT7XwLXbGOba8aY16W36zIw9IsgZLlLjl3NbdgiLmo3gUB9lGFeUKAY+oXBUSUAdzV9bHvbdsdF5QlClRBiV9NE2vkwgSOuYlHsJZUYhCoxuKvp4LioBwlc1N/GmMu4qH5AqHoCd5U3CV3UO8mzuzv3NhsThKpHcFf50YOLWmNju/5BqAYAd5UHsqHdB1zU9CA9IYKU08Jzy2qfwtR6om2Blbjih6kFivSEMDiqgcFdDUvCbYH3JeUAFzUCCNUIELvqn4TbAtvzc8ueL563Nx4I1YjgrtIjy19Su6ji9ywfG2JUEQwRG5hq7CqzNky1od2gS5mIUYXBUWUC7qo7PWxoh4vKDBxVBEP3ZFNyV2O3YWIXdWZDu6HAUYXBUWUI7ipMDy7q8hgiBXHgqCIYOQcoa3c1Ui5ab9sCjwGOKoz94rNVqoh9pCZxgeS839WQbTjEtsBjkHBftNneywz9JgB5V2wLXDoI1YQoMXbFtsCgGPpNNzaQS+yqzzYcY1vgMWDoFwZHNVHm7K7YFhh8EKoJM8fYldZ6m22BwQehmgEzc1eX2RYYfIhRJSgnJ4aOXfXRhrLrQZcFxe+kzpPacZMYVRgc1cyYibva7vAetgWeMQjVDJl67ErE5u/Iw9kWuACih345DX+GtspTXrrQd1Z7X20oWeiHgWUyf89BoEq+nmPrjKOaOVN1VzJT1zQEtMPaH3FR5YBQFcIUY1cya/fIeYltgQuFoV+CcqZG4pnBqCFl1zZ0hoDHOTx1pw8Y+kUch1AtX84USRi7imKZNrR1nbODQqjCMPQrlISxq95hmAcIVeEkjF0B9AZCBZNyV1AmCBWcgruCXEGo4Ay4K8gRhApqSe2ueIozLANCBY0kdleT3Ksd8gChgiA8ZxDGBqGCKHgSDowJQgWtwF3BGCBU0BrcFQwNQgWdwV3BULBneoJyIJ/nDE4R9kwPg6OCJOCuoE8QKkgGsSvoC4QKkoO7gtQgVNALuCtICUJVOH3f/LgrSAFCVShWoKxLkZv/Yp+tgLuCZUGoCkRrbdMIPohLuSBpBb2Du4KukEeVoJypoLW2rsaKxZWaKv8qj6caBPKuvkMeVRgcVQHYoZ3W2grUPw0ipeSJNIOBu4I2aGNmK8JBCnmk+6a4qEWPRq8Y5RHppbsrVkiEQagimOIFIgFy65J+a/nWn40xhz1Vq5GEzxm0wfq74tgmAUIVhqHfDBGHctxBpNTQQ8AKZgZhEQjVjHBSDh4sMYy6Mma8h9gV1IFQzQQv5WAZrJv5PGar4K7AhxhVBDnHBgIpB215KcHoUYXKpYTYFTGqMDiqiRKZchDLR6XUv40xmzmJlMJdgYBQTRBJObAzc38lqP0jGxMyxrzIuSWIXZUNQ78IcrHcS6Qc1PFOKXVzyGz0VMwt74qhXxgc1UTQWm8vkXLgYxM716YoUgp3VSQ4qgjG7MkSBpPVHPcjn4O7wlGFwVFljKQcHCaa8bplg9Jze2gC7qoMcFQRDN2Taa3XxEXNMuWgL6bqrnBUYXBUGeGkHLydc8pBX+Cu5guOKoIhejJJ3NyN3OUgxCNJbixCoOqYkrvCUYVBqCLo8wIh5aA/ppLVjlCFYeg3IqQc9AtZ7fMBRxVB6p6MlIPhydld4ajC4KgGhpSDccBdTRscVQQpejJSDvIhN3eFowqDo+oZUg7yA3c1PRCqHpGUg6J2OZgS5F1NB4Z+EbS13KQcTI8x864Y+oXBUSWGlINpgrvKGxxVBDE9GSkH82Fod4WjCoOjSgApB/MCd5UfOKoImnoyUg7mzxDuCkcVBkfVAVIOygF3lQcIVUtIOSiPPvOuxJVDAIZ+cTy1KQKkHEDirHZbznbssJJtXgpFa/05QeyhLTbl4G6xjT4TEsauYvlojCk2+730od/hgJ9lYxw/IlLzIGHsKpai3XfpQjVEbIiUg5mSMHYVQ9FCVfrQz1rpDz1+BCkHhZA44den6GGfKt1RicN52kPRpBwURs/uqvhwQdGOSn1fQHyY6KEKigcrQGJ39dQYs116oxYvVOp7LsvrJWdwSDmAMySYGbTXlI1tFt/plR5M/4oxxjqqa0tYdnY5gHMsOTP4SK6p4kVKIVTfEbG63DJmRcoBLMSJXf0pscsQ9pr61RjDUhsHhn41SIzhprgsfy3fRxkm7uKgoC0SZtgUp3VR3n4scdIXpLDUg1ABQPYw9AOA7EGoACB7ECoAyB6ECgCyB6ECgOxBqAAgexAqAMgehAoAsgehAoDsQagAIHsQKgDIHoQKALIHoQKA7EGoACB7fuAUlYXWekcptS5f+sgYc7/PBtBabyiltuS/J8aYO6WfA2hP8UKltV5VSm04L9mb6XmHcmwZq85LB8aYgzS1TIoVqR0pcE8p1atQeZ93pJTKRqjknK3YdjDGnGRQJWigeKESkXrsvqC1vtpGZLTW9mJ/5b1sb8gchQq+nbPbSql70hZWQH+iXfKFGNW3HtVna/Fboo5frXkNesZ2GtYpiVtaxI7zt9WI42FEEKp62grVTsQx0DNaa+uMP4m7XQ98mu92jzg/+YJQnXU+VZwiuoeVGFd1U7hxDhzV8LRp8xtKqScSp7tujEGoMgahOjv023P+HeuqXDfVOggP42CD58aYG8YYK1J7nIa8QaiWFyr3OFeocFQAiWDW76xQHUisworM16Dsot7WS0no3Cs7uUbrTn1OpD7P2/T4kie15dTrROr2JHZ4I/Vxc60anaLMeLqucq9rWobWektmYddrzsvzunp4dXU7BxtQ9w9/UqUheO+z7upJoOzT7yX13PKG/F9TPWLTHELnSUIKVSe48BwUgX2uX8k/Sqn3thnkZ1VSFar/P1vUNt6xO3KTVf83oXaVz3vlvqfhxx6zEihrw/sudT87Xp1fRXyv2mO87+B+1o7399vO394vqPunLu3glR/6WW1ZL7cdbot4vlnwGfY7bATaaz3yPLnX0sJzUMIPQ7/z6Qluz7UhjuEc8ro/7IsOyEqP+cZPNpVedc8LzH8VIXlPXVkbchP7EwMHXp0ee5+XCyuek9yTQPfzmnZ4NmCd3c+uRGq94e/VMc+01rUzjgvO017Nedrxjimb0pXa68lW5DW3d99qeN+W77xq3MVqw3tXvF71U93n1LiFNw2O5pNXlu9qVuUGP+dQIpzEEI6qSpitdSM17bDhvXdVfly3c895fdU/F5H1qnNr791zJZ//ONSuDedpq+aYOof9uMR70/0p2lH5DsWJL8QE1etm+2J7vnter3q9LgYh6/BuOC+tS0a1X5br+q778RYb8zDG/J7rrKTMwDXOvkk7uHGvHe+9RxJ/c9v/9HXn78tiy7jqnqtq9rDGifvu97bnGq/651zqeX2ZeOdcYehXj3sBbfnDP2994OnawJpA6rmhWk3w+f6i4LOITu1N6gVcg2V5ojc13HMSSubsizsLguX+msnTIbacJ/+cLxLOKZ+nXihdqFwhOb1wRHjcC9J3Ve7/2/Z+flnnZptqcI9ZdWIgfrxpYVlyk02qt7Y3uXxft7MYJfVj0cybdBB+TKui7Xk6Yp3oWUoXqkUsGv65//cvOrenrAvEnwnGRg5JfHFZ934rmcKOKSvrDGxZp/dYa20nD6qY0BsZOo1JTLs1CZV7ng4iUxgIoDuULlS1jkqonf3zlswcBXKc6oTqzFYwMZWsEaCq3EX1nxQiUO8lmLwzg4TZJgeIAHWg9ITP2tQDJTZfa33iHLMh4tWUiV7R1Kv2zWRvAEmg9NMOnjvpFSfS/mO7qhQgVB0oXahc6i6gPUeYKqFy4w0hoQoRJWRNuVwefYlir2IrDtUVKdvmv/vDo6YcsgnC0qoOMPT7Tp3AuPGnavavEqqYHTzrLsqDwN/r8Ge5qjLc4V7sTFhb4enbFZ5JbJQ0hbm5ji7nHEFzKF2oXM7dHBJ/ql5f8YYeTTNAoViRe9GuRG4n4wfzD7zfbcqKOcb9DqEbZtkbyq1PyhnJIYfdIdzvtSJD3UbEPSJUDqULVUyQ0xWkGKFqKv8rNakP9/xjXGpypZ47jsOvw8IYjiyEjbmBz4ht4MZaNm7k1meRk2q79CebG93r8Cz3AsP5hddEiZQuVC4xQlWxtyAVIGb2zU0OtNnmtRemXMyPvZv59OEIIlju8HRjQVkbLW4A39ncrrux5LOWXTvotldtWc5uBSHcczhWUmgT7kMtVmVN4BkxlW2UH3fYYXb2lB5MD/a6tjf0Zv9UZJJmY/l2SYgIR3Vj3pakRjcLvZrlcsu4USOQd+TYVaesDSmr2rLGfWTVQcO2KG79TrTWT5z4kT3+jbxWtYW7zcnREg7GnaCwyZ2v5DtVn7PTYqtnd/KjKstd7hJ73pJjP9t7dFi10LxakFzFP1fku58w/HMoeaGjt0i0cXsOcSKni0kDZe6EFruaswtxY7co2VlQlr/gddE2KRst6hfajsTIjfesqZ6Ri39j2sFfIHxuwXegzu871Ct4jHe8+9m1C4lrFjD7P5/kHL0KlVXST+lDv9iA6/OGf4do7BGrhbiyrmtRbOa5LGBtdAPisq4G4mb35fOiEkNlWHl1QYD7yFlMvews3aIF09Xn3A/lqEmdo7/jGMgC5us1W9gcSUjgp5ok4uJzr7SofJG4MYKUm/t3KdfbTVLJhdv6wZjOgunqRj5XjlO/k5jyZVh6ZnbOTc2Q+NXpzgDeZzX+raHubnzmwL1p3bJC7erv4OnHFWPq1abuXY4PlPXe6eju9P1E69wpWqgAckQE75NTteIfQFH60A8gR/wk2OL3p0KoAAbCDqFDy6Fq0khGm6nMCYZ+AAMh6RLrEkjfq1las+W5qWpHUYLpCBVA/9TEnUIc8QTn7zD0AxgOP8WiiSfipBApAUcFMDBO6kTd481ap6SUAEIFAHmjlPo/epOCQBVnTJoAAAAASUVORK5CYII=")}));
end ValveOnOff_TwoPort;

