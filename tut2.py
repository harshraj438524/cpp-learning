n=int(input())
col=int(input())
s=""
for i in range(n):
    for j in range(i+1):
        s=s+"* "
    s=s+"\n"
print(s)