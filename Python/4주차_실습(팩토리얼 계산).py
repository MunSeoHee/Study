num=int(input("정수를 입력하시오:"))

result=1

for x in range(1, num+1):
    result*=x

print(num, "!은", result, "이다.")
