# i =1
# while i<=5:
#     print(i * "*")# here i * ka mtlb i ke brabar string ko print kr do.
#     #i++ --> here its invalid. so we can use i=i+1
#     i=i+1
#     # --> if he is not have same space as print then i=i+1 is not works.


# i=0
# while(i<3):
#     print("Inside the while loop")
#     print(i)
#     i=i+1

# else:
#     print("Inside the else")    

# low = int(input("PLease enter the lower range "))
# up=   int(input("Please enter the upper range "))
# for n in range(low,up+1):
#  if n>1:
#     for i in range(2,n):
#         if(n%i==0):
#             break
#     else:
#      print(n)

x, y = 0, 1
while y < 10:
    print(y, end=' ')
    x, y = y, x + y
   
   
    