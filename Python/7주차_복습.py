def CtoF (c):
    return c*9/5+32

def FtoC(f):
    return 5/9*(f-32)

def menue ():
    x = input("'c' 섭씨온도에서 화씨온도로 변환 \n'f' 화씨온도에서 섭씨온도로 변환\n'q' 종료\n메뉴에서 선택하세요.\n")
    return x


x = menue()

while (x!='q'):
    

    if x=='c':
        c = int(input("섭씨온도:"))
        print("화씨온도:",CtoF(c))
    elif x=='f':
        f = int(input("화씨온도:"))
        print("섭씨온도:",FtoC(f))
    else:
        print("메뉴에 존재하지 않습니다.")

    x = menue()
