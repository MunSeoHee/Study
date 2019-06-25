arr = input("문자열을 입력하시오:")
x = len(arr)

if x%2==0:
    if arr[0:x//2]==arr[x//2+1:x+1]:
        print("회문입니다")

else:
    if arr[0:x//2]==arr[x//2+1:x+1]:
        print("회문입니다")
