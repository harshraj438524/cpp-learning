for i in range(int(input())):
    b=0
    a=int(input())
    while(a>0):
        remnd=a%10
        b=b*10+remnd
        a=a//10
    print(b)
