def generate_id(no):
    sum=0
    while no>0:
        d=no%10
        sum=sum+d**3
        no//=10
    return sum
def check_elg(pid,no):
    if pid==no:
        elg='eligible'
    else:
        elg='not eligible'
    return elg
    # main body to call the function

no=int(input())
n=no
count =0
while n>0:
    n=n//10
    count=count+1
if count <=3:
    pid=generate_id(no)
    elg=check_elg(pid,no)
    print("pid:",p