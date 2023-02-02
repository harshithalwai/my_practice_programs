"""lets create a syntific calculator !!!!!!!"""
while(True):
    print("    !!!!!Scientific calculator !!!!!!")
    try:
        num1=int(input("enter the number 1 : "))
        num2=int(input("enter the number 2 : "))
        op=input("enter the operator : + , - , * , / , % :")
        if op=='+':
            print(num1+num2)
        elif op=='-':
            print(num1-num2)
        elif op=='*':
            print(num1*num2)
        elif op=='/':
            print(num1/num2)
        elif op=='%':
            print(num1%num2)
        else:
            print("wrong operator chosen !! plz select the right one!!")
    except Exception as e:
        print(e)
    print("-------------!!!!!!!!!!!!!!!!!!!!!!!---------------------")