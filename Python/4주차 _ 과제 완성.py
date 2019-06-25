from random import randint

max_num = int (input ("30 이상의 정수를 입력하시오 :"))

count = list()
total = 0

for i in range(0, max_num+1):
    count.append(0)

while count[max_num]<1000:
    x = randint(0, max_num)
    total +=1

    for j in range(0, max_num+1):

        if j==x:
            count[j]+=1

for i in range(0, max_num+1):
    print(i, "이 발생한 회수는 ", count[i], "번 입니다")


print("0부터 입력한 숫자", max_num, "이 1000번 발생할때까지의 총 반복회수는", total, "번 입니다")
