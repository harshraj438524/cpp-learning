x,y=map(float,input().split(' '))
if(x%5!=0 or x>=(y-0.5)):
    print('%.2f'%y)
else:
    print('%.2f'%(y-x-0.50))