n1=int(input("enter first number : "))
n2=int(input("enter second number : "))
n=int(input("enter how many terms you want series : "))
print("series is : ",n1 , n2,end=",")
for x in range(n):
    sum=n1+n2
    print(sum,end=",")
    n1=n2
    n2=sum