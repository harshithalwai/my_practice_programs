def arm(x):
    sum=0
    a=x
    while a!=0:
        n=a%10
        sum=sum+n**3
        a=int(a/10)
    if x==sum:
        print(sum)
a=int(input("enter the 1st digit : "))
b=int(input("enter the last digit : "))
for x in range(a,b+1):
    arm(x)
