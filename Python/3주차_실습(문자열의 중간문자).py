arr = input("문자열을 입력하시오:")

count = len(arr)

if count%2 == 0:
    print("중앙글자는", arr[count//2-1], arr[count//2])
elif count%2!=0:
    print("중앙글자는", arr[count//2])
