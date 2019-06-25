from random import randint
from tkinter import*
from tkinter.filedialog import askopenfilename


def random_score (list):
    for i in range(20):
        list.append(randint(0,100))

def write_score (list):
    file = open("score.txt","a")
    file.write(str(list)+"\n")

def window ():
    main=Tk()
    openScore = Button (main, text = "학급성적 열람", command = open_score)
    classChart = Button(main, text = " 학급별 통계 ", command = class_chart)
    totalChart = Button(main, text = "  전체 통계  ", command = total_chart)

    openScore.pack()
    classChart.pack()
    totalChart.pack()

def open_score():
    readFile = askopenfilename()
    
    if(readFile != None):
        file = open(readFile, "r")
        contents = file.read()
        tk = Tk()
        T = Text(tk, height = 10, width = 100)
        T.pack()
        T.insert(END, contents)
        file.close()
    
def class_chart():
    window = Tk()
    class1 = Button(window, text = "1반", command = lambda: view(list0))
    class2 = Button(window, text = "2반", command = lambda: view(list1))
    class3 = Button(window, text = "3반", command = lambda: view(list2))
    class4 = Button(window, text = "4반", command = lambda: view(list3))

    class1.pack(pady=5)
    class2.pack(pady=5)
    class3.pack(pady=5)
    class4.pack(pady=5)


def view(list):
    class_score_view = Tk()
    global T
    T = Text(class_score_view, height = 10, width = 100)
    T.pack()
    T.insert(END, list)

    downsort = Button(class_score_view, text = "내림차순", command = lambda: down_sort(list))
    upsort = Button(class_score_view, text = "오름차순", command = lambda: up_sort(list))
    maxscore = Button(class_score_view, text = "최고점", command = lambda: find_max(list))
    minscore = Button(class_score_view, text = "최저점", command = lambda: find_min(list))
    downsort.pack()
    upsort.pack()
    maxscore.pack()
    minscore.pack()
    
def down_sort(list):
    for i in range(0,20):
        for j in range(0,20):
            if (list[i] > list[j]):
                temp = list[i]
                list[i] = list[j]
                list[j] = temp
    T.delete('0.0',END)
    T.insert(END, list)
        

def up_sort(list):
    for i in range(0,20):
        for j in range(0,20):
            if (list[i] < list[j]):
                temp = list[i]
                list[i] = list[j]
                list[j] = temp
    T.delete('0.0',END)
    T.insert(END, list)

def find_max(list):
    max = 0
    for i in list:
        if i>max:
            max=i
    T.delete('0.0',END)
    T.insert(END, max)

def find_min(list):
    min = 100
    for i in list:
        if i<min:
            min=i
    T.delete('0.0',END)
    T.insert(END, min)

def total_chart():
    window = Tk()
    global K
    K = Text(window, height = 10, width = 100)
    K.pack()
    scoreChart = Button(window, text = "전체 학생 성적별 분포", command = score_chart)
    totalAver = Button(window, text = "전체 학생 평균 성적", command = total_aver)
    totalMaxMin = Button(window, text = "전체 학생 최고 성적 및 최저 성적", command =total_max_min) 
    scoreChart.pack()
    totalMaxMin.pack()
    totalAver.pack()

def total_aver():
    sum=0
    num=0

    for i in list0:
        sum += i
        num+=1
        
    for i in list1:
        sum += i
        num+=1

    for i in list2:
        sum += i
        num+=1

    for i in list3:
        sum += i
        num+=1

    aver = sum/num
    K.delete('0.0',END)
    K.insert(END, "전체 학생 평균 성적 : "+str(aver))
        

def total_max_min():
    total_max = 0
    total_min = 100

    for i in list0:
        if total_max<i:
            total_max = i

        if total_min > i:
            total_min = i

    for i in list1:
        if total_max<i:
            total_max = i

        if total_min > i:
            total_min = i
    
    for i in list2:
        if total_max<i:
            total_max = i

        if total_min > i:
            total_min = i

    for i in list3:
        if total_max<i:
            total_max = i

        if total_min > i:
            total_min = i
            
    K.delete('0.0',END)
    K.insert(END, "전체 최고 성적 : "+str(total_max)+"\n"+"전체 최저 성적 : "+str(total_min))

    
    
def score_chart():
    list=[]
    num = []
    for i in range(101):
        list.append(i)

    for i in range(101):
        num.append(0)
        
    for i in list:
        for j in list0:
            if i == j:
                num[i]+=1
        for j in list1:
            if i == j:
                num[i]+=1
        for j in list2:
            if i == j:
                num[i]+=1
        for j in list3:
            if i == j:
                num[i]+=1
    K.delete('0.0',END)

    for i in range(101):
        K.insert(END, str(i)+"점 : "+str(num[i])+"\n")


    


global list0
list0 = []
global list1
list1 = []
global list2
list2 = []
global list3
list3 = []

random_score (list0)
random_score (list1)
random_score (list2)
random_score (list3)

file = open("score.txt","w")

write_score(list0)
write_score(list1)
write_score(list2)
write_score(list3)

window()
