def leap(x):
    """its a function that will tell you the given year is leap year or not"""
    #its a docstring
    if x%4==0:
        return True
    elif x%100==0:
        if x%4==0:
            return True
    else:
        return False
x=int(input("Enter the year : "))
if leap(x):
    print("its a leap year !!")
else:
    print("its not a leap year !!")
print(leap.__doc__)