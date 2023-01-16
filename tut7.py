def Print_Table(n, order):
    s=''
    if order=='Serial':
        i=1
        while i<=10:
            # print(i*n)
            s=s+str(n)+ "*"+ str(i) +"=" + str(n*i) +'\n'
            i=i+1

    elif order=='Reverse':
        i=10
        while i>=1:
            #print(i*n)
            s=s+str(n)+ "*"+ str(i) +"=" + str(n*i) +'\n'
            i=i-1

    return s

n=4
order='reverse'
print(Print_Table(n,order))