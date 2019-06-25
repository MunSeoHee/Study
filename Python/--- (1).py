from tkinter import*

def sleft(event):
    print("단일 클릭")

w = Button(None, text = '마우스 클릭')
w.pack()

w.bind('<Button-1>', sleft)

w.mainloop()
