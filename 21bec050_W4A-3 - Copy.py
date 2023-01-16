def not_bad(str1):
  a = str1.find('not')
  b = str1.find('bad')
  

  if b> a and a>0 and b>0:
    str1 = str1.replace(str1[a:(b+4)], 'good')
    return str1
  else:
    return str1
print(not_bad(input()))

