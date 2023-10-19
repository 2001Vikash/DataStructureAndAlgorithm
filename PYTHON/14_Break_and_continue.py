students = ["Ram","Krishna","Shyam","Radha","Sita","Vikash"]
for name in students :
    if name=="Vikash":
        break; # ; yaha optional hai in python
    print(name)    


for name in students:
    if name=="Shyam":
        continue
    print(name)    