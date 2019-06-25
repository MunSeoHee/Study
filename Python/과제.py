from tkinter import*
from tkinter.colorchooser import*

window = Tk()

def drow_pol():
    
    canvas = Canvas(scan, width=300, height=200, bg = "green")
    canvas.pack()
    canvas.create_polygon(x1.get(),y1.get(),x2.get(),y2.get(),x3.get(),y3.get(), fill="blue")

    

  
def polygon():
    global scan
    scan = Tk()

    f = Frame(scan)

    Label(f, text = "x1").grid(row=0)
    global x1
    x1 = Entry(f)
    x1.grid(row=0, column=1)

    
    l2 = Label(f, text = "y1").grid(row=1)
    global y1
    y1 = Entry(f)
    y1.grid(row=1, column=1)

    
    l3 = Label(f, text = "x2").grid(row=2)
    global x2
    x2 = Entry(f)
    x2.grid(row=2, column=1)
    
    l4 = Label(f, text = "y2").grid(row=3)
    global y2
    y2 = Entry(f)
    y2.grid(row=3, column=1)
    
    l5 = Label(f, text = "x3").grid(row=4)
    global x3
    x3 = Entry(f)
    x3.grid(row=4, column=1)
    
    l6 = Label(f, text = "y3").grid(row=5)
    global y3
    y3 = Entry(f)
    y3.grid(row=5, column=1)

    
    Button(f, text = "설정(Set)", command =drow_pol).grid(row=7, column = 1)

    f.pack()



    
def rect():
    tk = Tk()
    
    lable= Label(tk, text = "색상")
    lable.pack(padx = 0, pady = 0)
    lable["bg"] = "white"
    
    canvas = Canvas(tk, width=300, height=200)
    canvas.pack(pady = 30)
    color = askcolor()
    canvas.create_rectangle(50,0,150,100, fill = color[1])

    

button1 = Button(window, text = "다각형(POLYGON)", command = polygon)
button2 = Button(window, text = "사각형(RecT)", command = rect)

button1.pack(pady = 10)
button2.pack(pady = 10)

window.mainloop()
