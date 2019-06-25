from tkinter import *
from tkinter.colorchooser import *

window = Tk()

def dongdong2() :
    window = Tk()
    canvas = Canvas(window, bg='green', width=500, height=500)
    canvas.pack()

    canvas.create_polygon(e1.get(), e2.get(), e3.get(), e4.get(), e5.get(), e6.get(), fill="blue")
    window.mainloop()


def dongdong1() :
    window = Tk()
    Label(window, text="x1").grid(row=0)
    Label(window, text="y1").grid(row=1)
    Label(window, text='x2').grid(row=2)
    Label(window, text="y2").grid(row=3)
    Label(window, text="x3").grid(row=4)
    Label(window, text='y3').grid(row=5)

    global e1
    global e2
    global e3
    global e4
    global e5
    global e6

    e1 = Entry(window)
    e2 = Entry(window)
    e3 = Entry(window)
    e4 = Entry(window)
    e5 = Entry(window)
    e6 = Entry(window)

    e1.grid(row=0, column=1)
    e2.grid(row=1, column=1)
    e3.grid(row=2, column=1)
    e4.grid(row=3, column=1)
    e5.grid(row=4, column=1)
    e6.grid(row=5, column=1)

    Button(window, text='설정(set)', command=dongdong2).grid(row=6, column=1, sticky=W, pady=4)

    
    
b1 = Button(window, text="다각형(POLYGON)", command=dongdong1)
b1.pack(pady=10, padx=10)
    

def callback():
    DongDong = Tk()
    label = Label(DongDong, text = "색상")
    label.pack()

    Gachon = Tk()
    color=askcolor()
    w = Canvas(Gachon, width=500, height=500)
    w.pack()
    w.create_rectangle(50,25,200,100,fill=color[1])

b2 = Button(window, text = "사각형(RecT)",command=callback)
b2.pack(pady=10, padx=10)
    

window.mainloop()
