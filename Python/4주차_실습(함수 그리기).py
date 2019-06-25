import turtle
import math

t=turtle.Turtle()



t.penup() 
for angle in range(1):
    y = math.cos(math.radians(angle))
    scaledX=angle
    scaledY=y*100
    t.goto(scaledX, scaledY)

t.pendown()

for angle in range(360):
    y = math.cos(math.radians(angle))
    scaledX=angle
    scaledY=y*100
    t.goto(scaledX, scaledY)

t.penup()
