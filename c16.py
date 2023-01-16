n=int(input())
for i in range(n):
   q,s=map(int,input().split(" "))
   h=(q*(q+1))//2-s
   print(int(h))
