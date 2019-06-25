banknum = input("계좌번호를 입력하시오:")
arr = ''
for i in banknum:
    if i != '-':
        arr += i


print(arr)
