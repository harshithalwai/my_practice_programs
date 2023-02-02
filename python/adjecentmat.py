mat1=[]
mat2=[]
size1=int(input("enter the row of the matrix : "))
size2=int(input("enter the coloumn of the matrix : "))
print("enter the elements os the 1st matrix :")
for x in range(size1):
    o=[]
    for y in range(size2):
        a=int(input(f"enter the element of mat1 [{x}][{y}] : "))
        o.append(a)
    mat1.append(o)
for x in range(size1):
    o=[]
    for y in range(size2):
        a=mat1[y][x]
        o.append(a)
    mat2.append(o)
print(mat2)