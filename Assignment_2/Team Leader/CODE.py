import time
import random
i=0
while(i<=2000):
    i=i+1
    time.sleep(2)

    temp=random.randint(0,30)
    humid=random.randint(1,100)
    if temp<=15:
        print(temp,"the temperature is low , ALARM IS OFF")
    elif temp<=25:
        print(temp,"the temperature is normal ,ALARM IS OFF")
    else:
        print(temp,"the temperature is high , ALARM IS ON")
    if humid<=15:
        print(humid,"the humidity is low , ALARM IS OFF")
    elif humid<=80:
        print(humid,"the humidity is normal , ALARM IS OFF")
    else:
        print(humid,"the humidity is high , ALARM IS ON")

