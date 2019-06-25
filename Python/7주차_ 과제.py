from random import randint

rows = 3
cols = 40
chart = []

for row in range(rows):
    chart += [[0]*cols]

total_max = 0
total_min = 100
total_aver = 0
class_max = [0,0,0]
class_min = [100,100,100]
class_aver = [0,0,0]
    
for i in range(rows):
    for j in range(cols):
        chart[i][j] = randint(0,100)

        if chart[i][j] > class_max[i]:
            class_max[i] = chart[i][j]

        if chart[i][j] > total_max:
            total_max = chart[i][j]

        if chart[i][j] < total_min:
            total_min = chart[i][j]

        if chart[i][j] < class_min[i]:
            class_min[i] = chart[i][j]

        total_aver += chart[i][j]
        class_aver[i] += chart[i][j]

        
for i in range(3):
    print("*"*50)
    print("%d반 평균은 %f"%(i+1, class_aver[i]/40))
    print("최고점은", class_max[i])
    print("최저점은", class_min[i])
    print("*"*50)

print("*"*50)
print("전체평균은 %f"%(total_aver/120))
print("최고점은", total_max)
print("최저점은", total_min)
print("*"*50)

print("%s\n%s\n%s"%(chart[0],chart[1],chart[2]))






