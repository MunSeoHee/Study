arr = input("문자열을 입력하시오:")

digits = 0
spaces = 0
alphas = 0

for i in arr:
    if i.isdigit():
        digits+=1
    elif i.isspace():
        spaces+=1
    elif i.isalpha():
        alphas+=1

   
print("문자 = %d, 숫자 = %d, 공백 = %d" %(alphas,digits, spaces))
