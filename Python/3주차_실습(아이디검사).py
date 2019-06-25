ID = ['hong']
PW = ['123456789']

x = input("아이디를 입력하시오:")

if x in ID:
    y = input("패스워드를 입력하시오:")

    if y in PW:
        print("환영합니다.")

    else :
        print("일치하지 않습니다.")

else:
    print("아이디가 없습니다")
