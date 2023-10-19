# we can store all primitive data types in Lists.
# or we can say list is collection of item. it is complex.
marks = [34,45,65,54, "Viaksh"] # we can put different types of data.
print(marks)
print(marks[0])
print(marks[1])
print(marks[2])
print(marks[3])
print(marks[4])
print(marks[-1]) # here - means pichhe se print krega in python.
print(marks[-2])
print(marks[-3])
print(marks[-4])
print(marks[-5])
print(marks[0:2]) # here 2 is not included. 0 and 1 print.
for score in marks :
    print(score)    # here its mean that list ki sabhi value print ho jayegi.


marks.append(99)  # here apend means adding in last of the list.
print(marks)

marks.insert(0,99)
print(marks)
print(99 in marks)
print(len(marks))  
 
i =0
while(i<len(marks)):
    print(marks[i])
    i=i+1

   # If we want to clear all lists then
marks.clear()
print(marks)



#print("ji ha ",3)