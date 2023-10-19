# Same definition as set in maths means one element can come only one time.
# it is also like as tuple but here  use {} place of ()
marks = {97,96,97,98,97} # its a set but 97 do bar hai means print ke time pr ek baar ho jayega
print(marks)
# aur sets ke andar index nhi hota hai means ye unordered manner me value print hoga
# isiliye marks[0] se error aayega means for accesing we can use loop
for i in marks:
    print(i)
set1=set({1,2,3,4})
print(set1)