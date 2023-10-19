name = "VIKASH YADAV"
# indexing starts in python 0,1,2,3....
print(name.upper())# he can;t change original string he returns new string as upper case.
print(name.lower())
print(name)
print(name.find('a'))# if Y is present in string the returs index of Y or return -1.
# ab hum a ko search karenge to wo sabse pahel aane wale a ke index ko return karega.
# yadi hum Yadav ko find karenge to to o Y ka index return karega 
# if we search yadav then return -1.
print(name.replace("Vikash Yadav","King of coder!"))
print(name)# ye original string ko change nhi krta hai.
print(name.replace("Yadav","Dangerous coder!"))
# yadi hum Yadav ke jagah yadav dete hai to koi change nhi hoga aur Vikash Yadav print hoga
print(name.replace("a","j"))
# Keyword --> its present in the programming language dictonary.Ex- print(),input()etc.. 
print('Y'in name)
print('j' in name)

