def fact(num):
    if num==1 or num==0:
        return 1
    else:
        return num*fact(num-1)
sum=0
a=int(input("enter the number : "))
b=int(input("enter the term : "))
for x in range(1,a+1):
    sum=sum+(a**x)/fact(x)
print("sum is : ",sum)