num=int(input('Enter the number: '))
flag= False
for i in range(2,num):
    if num%i==0:
        flag=True
        break
if flag:
    print("number is not prime")
else:
    print("number is prime")