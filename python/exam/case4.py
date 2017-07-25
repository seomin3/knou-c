#!/usr/bin/env python3

import turtle

input_str = input('점의 위치 x, y를 입력하세요: ')
x, y = input_str.split(',')
x = int(x)
y = int(y)

turtle.penup()
turtle.goto(-250, 125)
turtle.pendown()
turtle.forward(500)
turtle.right(90)
turtle.forward(250)
turtle.right(90)
turtle.forward(500)
turtle.right(90)
turtle.forward(250)
turtle.right(90)

turtle.penup()
turtle.goto(x, y)
turtle.pendown()
turtle.dot(3, 'red')

if x > -250 and x < 250 and y > -125 and y < 125:
  inside_str = '내부'
else:
  inside_str = '외부'

turtle.penup()
turtle.goto(-200, -150)
turtle.pendown()
turtle.write('점은 사각형의 ' + inside_str + '에 있습니다')

turtle.getscreen()._root.mainloop()
