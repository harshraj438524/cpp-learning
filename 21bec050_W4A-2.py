def read_marks():
    m1=int(input())
    m2=int(input())
    m3=int(input())
    m4=int(input())

    if(m1>0 and m1<=20) and (m2>0 and m2<=100) and (m3>0 and m3<=100)and (m4>0 and m4<=50):
        check_flag=True
    else:
        check_flag=False

    return check_flag,m1,m2,m3,m4

def compute_gpa(m1,m2,m3,m4):
    m1=m1/20
    m2=m2/100
    m3=m3/100
    m4=m4/50
    grade=1.5*m1+4.0*m2+2.0*m3+2.5*m4
    grade=round(grade,2)
    return grade

def assign_grade(grade):
    if grade==10:
        grade_letter='O'
    elif grade>=9 and grade<10:
        grade_letter='A'
    elif grade>=8 and grade<9:
        grade_letter='B'
    elif grade>=6.5 and grade<8:
        grade_letter='C'
    elif grade>5 and grade<6.5:
        grade_letter='D'
    elif grade<5:
        grade_letter='F'
    else:
        grade_letter='invalid grade'
    return grade_letter


check_flag ,m1,m2,m3,m4=read_marks()
if check_flag==True:
    grade=compute_gpa(m1,m2,m3,m4)
    grade_letter=assign_grade(grade)
    print("gpa=",grade)
    print("grade=",grade_letter)
else:
    print('invalid marks')
