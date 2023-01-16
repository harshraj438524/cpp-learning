a=26
s=""
ch=65
if 1<=a<=26:
    for i in range(a):
        ch=65
        s=s+"_"
        for j in range(i+1):
            s=s+(chr(ch))+"_"
            ch=ch+1
        s=s+"\n"
else:
    s="invalid input"
print(s)