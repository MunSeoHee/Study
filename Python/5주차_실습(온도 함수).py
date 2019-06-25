def FtoC(F):
    C = (F-32)*5/9
    return C

F = int(input("화씨온도를 입력하시오:"))
C=FtoC(F)
print(C)
