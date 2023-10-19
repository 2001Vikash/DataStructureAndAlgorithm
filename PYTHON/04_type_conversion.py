from traceback import print_tb


old_age = input("What is your old age : ")
  # its show an error because. new_age = old_age +2 
       # Whatever we make input in python that's comes in as String formate always
# old_age behaves as String and 2 is an integer. so can't add String with integer.
 # so here we need to write type conversion.
new_age =int(old_age)+2
print("Your new age is now : " , new_age)
# so here we can only use ' ,'. we can't use '+' beacuse new_age is behaves like integer 
# that means we can't add or concatenate string with integers.
number =18
print(float(number))# we can also use other conversion like as:
# str()--> for string.
# bool()--> its for boolean. etc...
vikash = 0 # And all +ve and -ve integers gives true in python
print(bool(vikash))