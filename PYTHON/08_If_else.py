# : --> its means block of statement or combined statement.
age =  int(input("Enter your age please!"))
if age>=18:  # if ke andar ki sabhi cheeje tabhi run hogi jb main line se same space pr ho.
    print("You are an adult!")
    print("You can vote!")
elif (age<18 and age>3):# condition can be in parenthises or not--> both are correct.
      print("You are in school")
else :
    print("You are child")        
    # : ka mtlb hota hai ki iske baad hum ab block of code likhane wale hai