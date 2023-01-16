def is_leap_year(x):
    if(x%400==0):
        return True
    elif(x%100==0 and x%4==0):
        return True
    elif(x%4==0):
        return True
    else:
        return False
print(is_leap_year(int(input())))
        
