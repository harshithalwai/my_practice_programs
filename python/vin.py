def fact(num):
    if num==0 or num==1:
        return 1
    else:
        return num*fact(num-1)
num=int(input("enter the nuber you want to get factorial : "))
print(fact(num))
def add (num):
    even=0
    odd=0
    for x in range (num):
        if x%2==0:
            even+=x
        else:
            odd+=x
    print("even sum :%d \n odd sum : %d"%(even,odd))
add(10)
n=int(input("enter how many number you want to insert"))
l=[]
for x in range (n):
    a=int(input("enter the number : "))
    l.append(a)
print(max(l))
print(min(l))
n=int(input("enter the limit : "))
i=-1
num=int(input("enter the number : "))
for x in range(1,n):
    if x%2==0:
        print(num*x)
    else:
        print(num*x*i)
num=int(input("enter the number : "))
num1=num
term=0
sum=0
while num!=0:
    n=int(num%10)
    term=term*10+n
    sum+=n
    num=int(num/10)
print((sum,term))
if term==num1:
    print("palindrome")
else : 
    print("not")
def cube(x):
    return 1/x**3
n=int(input("enter the limit : "))
sum=0.0
for x in range(1,n):
    sum+=cube(x)
# print(sum)
n=(input("enter the string : "))
print(n[::-1])
n=(input("enter the string : "))
print(n.capitalize())
print(n.count("h"))
print(n.find("h"))
print(n.lower())
print(n.upper())
print(n.title())

a=eval(input())
b=eval(input())
c=a+b
print(c)
a=list(('a','s','g','e','t'))
print(a.sort())
print("#$%^&*".join("ndfghjkdfgh"))
def f1():
    print("hello")
f2=f1
f2()
def exe(fun):
   return fun(2,4,6,3,8)
print(exe(max))
def dec(f1):
    def exe():
        print("excuting")
        f1()
        print("end")
    return exe


@dec
def name():
    print("im harshit")
name()