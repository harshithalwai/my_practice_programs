mat1=[]
mat2=[]
mat3=[]
size1=int(input("enter the row of the 1 matrix : "))
size2=int(input("enter the coloumn  of 2nd and row of 1st the matrix : "))
size3=int(input("enter the coloumn of 2 the matrix : "))
print("enter thte elements os the 1st matrix :")
for x in range(size1):
    o=[]
    for y in range(size2):
        a=int(input(f"enter the element of mat1 [{x}][{y}] : "))
        o.append(a)
    mat1.append(o)
print("enter thte element of the 2nd matrix : ")
for x in range(size2):
    o=[]
    for y in range(size3):
        a=int(input(f"enter the element of mat1 [{x}][{y}] : "))
        o.append(a)
    mat2.append(o)
print("matrix 1 is : ",mat1)
print("matrix 2 is :",mat2)
print("----------------------------------####################---------------------------")
for x in range(size1):
    o=[]
    for y in range(size3):
        sum=0
        for z in range(size2):
            sum=sum+mat1[x][z]*mat2[z][y]
        o.append(sum)
    mat3.append(o)
print(mat3)