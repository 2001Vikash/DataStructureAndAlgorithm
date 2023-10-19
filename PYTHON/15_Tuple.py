# Tuple is like as List but It is Immutable (most Imp) means yaha list ki trh midification wale
# operation nhi ho sakte hai and it is define in pranthises ()
marks = (96,97,98,97)
marks2=100,23,45,545,"Vikas" # its also like a tuple means () imp nhi hai tuple ke liye
print(marks2)
#  marks[0]=90 is case me error aata hai kyoki tuples are immutable
print(marks.count(97))# means how many occuring of 97 that is 2.
print(marks.index(97))# jb pahli bar 97 jaha aayega wahi index print hoga