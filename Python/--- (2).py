from tkinter import*

def show():
    print("이름:%s"%(e1.get()))

parent = Tk()
Label(parent, text = "이름").grid(row=0)

e1 = Entry(parent)

e1.grid(row=0,column=1)

Button(parent, text='보이기', command=show).grid(row=3,column=1)

mainloop()
