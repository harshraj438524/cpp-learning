a=[12,2,24,23,234,324,42,2,423,7]
def even(n):
   if (n%2==0):
      return True
a=list(filter(even,a))
for i in range(len(a)):
   print(a[i])