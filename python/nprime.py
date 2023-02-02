def prime(num):
    if num==2:
        return True
    else:
        x=2
        while x<num:
            if num%x==0:
                return False
            x+=1
        else:
            return True
x=int(input("enter the last number : "))
print("prime numbers are : ",end=" ")
for y in range(2,x):
    if prime(y):
        print(y,end=" ")
    else:
        continue