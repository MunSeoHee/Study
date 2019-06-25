import turtle

t = turtle.Pen()

for i in range(4):

    x = input("왼쪽  = left, 오른쪽 = right:")

    if x == 'left':
        t.left(60)
        t.forward(100)

    elif x == 'right':
        t.right(60)
        t.forward(100)
    
