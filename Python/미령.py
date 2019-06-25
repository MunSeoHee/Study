from tkinter import*
from tkinter.colorchooser import*

window=Tk()

def polygon():

    w=Tk()
    
    Label(w,text='x1').grid(row=0)
    Label(w,text='y1').grid(row=1)
    Label(w,text='x2').grid(row=2)
    Label(w,text='y2').grid(row=3)
    Label(w,text='x3').grid(row=4)
    Label(w,text='y3').grid(row=5)

    global x1
    global y1
    global x2
    global y2
    global x3
    global y3
    

    x1=Entry(w)
    y1=Entry(w)
    x2=Entry(w)
    y2=Entry(w)
    x3=Entry(w)
    y3=Entry(w)

    x1.grid(row=0,column=1)
    y1.grid(row=1,column=1)
    x2.grid(row=2,column=1)
    y2.grid(row=3,column=1)
    x3.grid(row=4,column=1)
    y3.grid(row=5,column=1)

    Button(w,text='설정(set)',command=canvas).grid(row=6)


def canvas():
    window = Tk()
    canvas = Canvas(window, bg='green', width=500, height=500)
    canvas.pack()

    canvas.create_polygon(x1.get(), y1.get(), x2.get(), y2.get(), x3.get(), y3.get(), fill="blue")
    window.mainloop()
  

def rect():
    canvas=Canvas(window,width=300,height=300)
    canvas.grid()
    color=askcolor()

    canvas.create_rectangle(10,10,200,200,fill=color[1])
   

    
b1=Button(window,text="다각형(POLYGON)",command=polygon)
b1.grid(row=0)
b2=Button(window,text='사각형(RecT)',command=rect)
b2.grid(row=1)

window.mainloop()
