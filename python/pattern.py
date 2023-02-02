row=int(input("enter the rows : "))
for x in range(1,row+1):
    for y in range(x):
        print('*',end="")
    print()
# for x in range(5,0,-1):    ""using this loop""
#     print(x)
print("--------------------------------------#################-------------------------------------------------")
for x in range(row,0,-1):
    for y in range(0,x):
        print("*",end="")
    print()
print("--------------------------------------#################-------------------------------------------------")