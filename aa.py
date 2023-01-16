def pointer(quizmks,exammks,assgnmks,projectmks):
    if quizmks>20:
        return "INVALID INPUT"
    elif exammks>100:
        return "INVALID"
    elif assgnmks>100:
        return "invalid"
    elif project>50:
        return "invalid"
    


    cg=(0.15/20*quizmks + 0.40/100*exammks + 0.20/100*assgnmks + 0.25/50*projectmks)*10
    return cg

quiz=int(input("enter quiz marks/20:"))
exams=int(input("enter exams marks/100:"))
assgn=int(input("enter assignment marks/100:"))
project=int(input("enter project marks/50:"))
cgpa=pointer(quiz,exams,assgn,project)
if cgpa==10:
    print("O")
elif cgpa<10 and cgpa>=9:
    print("A") 
elif cgpa<9 and cgpa>=8:
    print("B")
elif cgpa<8 and cgpa>=6.5:
    print("C")
elif cgpa<6.5 and cgpa>=5:
    print("D")
else:
    print("F")
print("your cgpa is :",pointer(quiz,exams,assgn,project))