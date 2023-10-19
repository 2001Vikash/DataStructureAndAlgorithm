first = input("Enter your first number : ")
second = input("Enter your second number : ")
operator = str(input("Enter your operator : "))# here str means string.
first = int(first)
second = int(second)
if(operator =='+'):
    print("Addition : ",first+second)
elif(operator=='-'):
    print("Substraction : ",first-second)
elif(operator=='*'):
    print("Multiplication : ",first*second)
elif(operator=='/'):
    print("Division : ",first/second)
 # here is imp that first is int and second is int but ans can be float.
 # if we want int then we can use //.   
elif (operator=='%'):
    print("Remainder : ",first%second)                
else:
    print("Oops! please enter the correct key.")    