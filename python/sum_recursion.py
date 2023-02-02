def sum(num):
    if num<=1:
        return num
    else:
        return num+sum(num-1)
num=int(input("enter the number : "))
print(f"the sum of {num} is {sum(num)} !!")
