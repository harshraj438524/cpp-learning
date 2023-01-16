def is_leap_year(n):
    if(n%400==0):
     print("leap year")
    elif(n%100==0 and n%4==0):
        print("leap year")
    elif(n%4==0):
        print("leap year")
    else:
        print("not leap year")
is_leap_year(int(input()))