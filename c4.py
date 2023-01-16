for t in range(int(input())):
    a=int(input())
    i=1
    remd=0
    while(a>0):
        remd=remd+a%10
        a=a//10
    print(remd)
    