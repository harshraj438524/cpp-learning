a=int(input())
k=a-1
for i in range(a):
    for p in range(k):
        print(" ",end="")
    k=k-1

    for j in range(i+1):
        print("*",end="")
    print("\n")