from random import randint
from tkinter import*
from tkinter.filedialog import askopenfilename

def choose_file():
    file = open("score.txt", "r")
    contents = file.read()
    tk = Tk()
    T = Text(tk, height=10, width=100)
    T.pack()
    T.insert(END, contents)
    mainloop()
    file.close()

def choose_class ():
    window = Tk()
    class1 = Button(window, text = "1반", command = one)
    class2 = Button(window, text = "2반")
    class3 = Button(window, text = "3반")
    class4 = Button(window, text = "4반")
    class1.pack(pady=5)
    class2.pack(pady=5)
    class3.pack(pady=5)
    class4.pack(pady=5)

def one():
    window = Tk()
    file = open("score.txt", "r")
    score_file = file.readline()
    label = Label(window, text = score_file)
    label.pack()
    file.close()

    button = Button (window, text= "내림차순", command = downsort)
    button.pack()

def downsort():
    for i in range(19):
        for j in range(i+1, 20):
            if score[0][i]<score[0][j]:
                temp = score[0][i]
                score[0][i]=score[0][j]
                score[0][j] = temp






file = open("score.txt", "w")
global score
row = 4
cols = 20
score = []

for i in range(row):
    score+=[[0]*cols]

for i in range(row):
    for j in range(cols):
        score[i][j] = randint(0,101)
    file.write(str(i+1)+"반 : "+str(score[i])+"\n")

file.close()
    
first_window = Tk()
score = Button (first_window, text = "학급 성적 열람", command = choose_file)
score.pack(pady=5)
clas = Button (first_window, text = "  학급별 통계  ", command = choose_class)
clas.pack(pady=5)
