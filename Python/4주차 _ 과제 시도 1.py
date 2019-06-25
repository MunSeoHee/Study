from random import randint

num=int(input("30 이상의 정수를 입력하시오:"))

num_count=0

count= [[0]*num]
for i in range(0, num):
    count[i] = 0

while num_count<=1000:
    x = randint(0, num)

    for j in range(0, num+1):

        if j==x:
            count[j]+=1
        
        
for k in range(0, num+1):
    print(count[k])
