num = int(input("어디까지 계산할까요?:"))

sum=0

for x in range(1, num+1):
    sum=sum+x

print("1부터", num, "까지의 정수의 합 = ", sum)
