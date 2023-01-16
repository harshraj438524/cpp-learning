def factorial(n):
	a=1
	for i in range(1,n+1):
		a=a*i
	return a
	

	#implement factorial function
	
	
def print_Combination(n, r):
	s = ""
	if n>=0 and n>=r:
		s=s+str(factorial(n)/factorial(n-r))
		return s
	else:
		return "Wrong Input"
n=10
r=4
s =print_Combination(n, r)
print(s)



