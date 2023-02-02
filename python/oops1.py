class student :
    pass
harry=student()
harry.name="Harry"
harry.std=2
print(harry.name)
harshit=student()
harshit.name="harshit"
harshit.std=1
print(harry.name , harshit.name)
harry.sub=harshit.sub=["math","science"]
print(harry.sub , harshit.sub)
class employee :
    no=8
    pass 
harshit=employee()
shivam=employee()
harshit.name="harshit" #these variables are called """"instence variable"""
harshit.std=1 #all the variables we define 
harshit.grade='a'
print(harshit.name)
print(harshit.no)
harshit.no=123456
print(harshit.no)
print(employee.__dict__)


