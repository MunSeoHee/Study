from random import randint

answer = randint(1,100)
print("숫자게임에 오신 것을 환영합니다.")

guess=0
count=0

while(guess!=answer):

    g=input("숫자를 맞춰보세요:")
    guess=int(g)

    if (guess>answer):
        print("너무 큼!")
        count=count+1
    else:
        print("너무 작음!")
        count=count+1
        

if(guess==answer):
    print(count,"회")
