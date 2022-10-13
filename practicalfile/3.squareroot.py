#method 1 using **0.5
num = float(input('Enter the number: '))
sqrt = num ** 0.5
print('Square root of %0.2f is %0.2f '%(num, sqrt))
#method 2 using math.sqrt(num)
import math 
num = float(input('Enter the number: '))
print('Square root = ',math.sqrt(num))
#method 3 using sqrt
from math import sqrt
number = float(input('Enter the number: '))
square_root = sqrt(number)
print(square_root)
#method 4 using isqrt (to find interger value)
from math import isqrt
number = float(input('Enter the number: '))
square_root = isqrt(number)
print(square_root)