list = []
count = 0
sum = 0

for i in range(5):
    list.append(int(input("성적을 입력하시오:")))
    sum+=list[i]
    if list[i]>=80:
        count+=1

print("성적 평균은", sum/5, "입니다.")
print("80점 이상 성적을 받은 학생은", count, "명입니다.")
