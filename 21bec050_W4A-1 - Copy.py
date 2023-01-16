def cal_bill(x):
 if(0<=x<50):
    y=x*2.60    
    surcharge=25
    return round(y+surcharge,2)

 elif(x<=100):
    y=130+(x-50)*3.25
    surcharge=35
    return round(y+surcharge,2)

 elif(x<=200):
    y=130+162.5+(x-100)*5.26
    surcharge=45
    return round(y+surcharge,2)

 else:
    y=130+162.5+526+(x-200)*8.45
    surcharge=75
    return round(y+surcharge,2)


print(cal_bill(int(input())))














