# Recursive Python function to solve the tower of hanoi

def TowerOfHanoi(n , beg, aux, end):
	if n==1:
		print ("Move disk 1 from source",beg,"to destination",end)
		return
	TowerOfHanoi(n-1, beg, end, aux)
	print ("Move disk",n,"from source",beg,"to destination",end)
	TowerOfHanoi(n-1, aux, beg, end)
		
# Driver code
n = 4
TowerOfHanoi(n,'A','B','C')
# A, C, B are the name of rods

# Contributed By Dilip Jain
