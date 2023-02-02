mat1=[]
mat2=[]
mat3=[]
size1=int(input("enter the row of the matrix : "))
size2=int(input("enter the coloumn of the matrix : "))
print("enter thte elements os the 1st matrix :")
for x in range(size1):
    o=[]
    for y in range(size2):
        a=int(input(f"enter the element of mat1 [{x}][{y}] : "))
        o.append(a)
    mat1.append(o)
print("enter thte element of the 2nd matrix : ")
for x in range(size1):
    o=[]
    for y in range(size2):
        a=int(input(f"enter the element of mat1 [{x}][{y}] : "))
        o.append(a)
    mat2.append(o)
print("matrix 1 is : ",mat1)
print("matrix 2 is :",mat2)
print("----------------------------------####################---------------------------")
for x in range(size1):
    o=[]
    for y in range(size2):
        a=mat1[x][y]+mat2[x][y]
        o.append(a)
    mat3.append(o)
print(mat3)
        
