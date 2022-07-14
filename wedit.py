#!/usr/bin/env python
import math

print("Enter music count: ", end="")
music = int(input())

print("Enter music length in minutes: ", end="")
length = int(input())

base_price = 200
price = base_price+(base_price*math.log(music+1,10)*math.log(length+1,4))
print("%d" % price)
