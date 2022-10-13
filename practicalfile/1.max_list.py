#method 1 Using max() function
a=[12, 65, 54, 39, 102, 37, 72, 33, 5, -28, 0, 15]
print(max(a))
# Max in a list of string
str = ["a", "b", "c", "d", "e"]
print(max(str))
    #ororororor
str=max(string, key=len)
print(str)
#method 2 Using sort() function
num = [12, 65, 54, 39, 102, 37, 72, 33, 5, -28, 0, 15]
num.sort() # ororor a=sorted(num) then max=num[-1]
print(num)
max = num[-1]
print(max)
#method 3 maximum value using for loop 
def max_value(list):
    max = list[0]
    for i in list:
        if i > max:
            max = i
    return max

num = [12, 65, 54, 39, 102, 37, 72, 33, 5, -28, 0, 15]
print(max_value(num))
#method 4 maximum value using reduce() function
from functools import reduce
list1 = [-1, 3, 7, 99, 0]
print(reduce(max, list1))
     #ororororor
print(reduce(lambda x, y: x if x > y else y,list1))
#method 5 maximum value by using the Heap Queue
import heapq
list1 = [-1, 3, 7, 99, 0]
print(heapq.nlargest(1, list1))
#method 6 maximum value using Tail Recursive Algorithm
def func(arr, max_=None):
    if(max_ is None):
        max_ = arr.pop()
    current = arr.pop()
    if(current > max_):
        max_ = current
    #if(arr):
        return func(arr, max_)
    return max_

list1=[1,2,3,4,2]
result = func(list1)
print(result)
