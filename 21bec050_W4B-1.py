def check_life(x):
 if(0<=x<=2):
      humanage=10.5*x
      return humanage
 elif(x>2):
      humanage=(x-2)*4
      return 21+(x-2)*4
 elif(x<0):
      return ("this cannot be true!")
print(check_life(int(input())))
    
