for i in range(int(input())):
    c=0
    a=int(input())
    while(a>0):
      remnd=a%10
      a=a//10
      if(remnd==4):
        c=c+1
    print(c)

