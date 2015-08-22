from __future__ import division
import math

a = input()
b = input()

c = math.sqrt((a*a)+(b*b))


print int(math.floor((math.acos(b/c)*57.29577)+0.5))


#print math.acos(c/b)*57.2957795


