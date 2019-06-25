def plus (list):
    list.append(input("이름을 입력하시오"))

def delete (list):
    num = int(input("바꾸고 싶은 친구의 번호를 입력하시오"))
    list.remove(list[num])

def change (list):
    num = int(input("바꾸고 싶은 친구의 번호를 입력하시오"))
    list[num] = input("이름을 입력하시오:")

def printf (list):
    print(list)


list=[]

while (1):
    print("-"*10)
    print("1. 친구 리스트 출력")
    print("2. 친구추가")
    print("3. 친구삭제")
    print("4. 이름변경")
    print("9. 종료")
    choice = char (input("메뉴를 선택하시오:"))

    if choice==1:
        printf(list)

    elif choice==2:
        plus(list)

    elif choice==3:
        delete(list)
        
    elif choice==4:
        change(list)

    elif choice == 9:
        break

    else:
        print("메뉴에 존재하지 않습니다.")
