temp1=num=53896
foo=0
while temp1>0:
    min=temp1%10
    temp2=temp1//10
    temp1=min
    p=10
    while temp2>0:
        a=temp2%10
        if a<min:
            temp1=min*p+temp1
            min=a
        else:
            temp1=a*p+temp1
        p=p*10
        temp2=temp2//10
    foo=foo*10+min
    temp1=temp1//10
print(foo)