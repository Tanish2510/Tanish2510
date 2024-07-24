import turtle

# Setup
pen = turtle.Turtle()
pen.speed(0)
pen.width(2)
pen.color("red")
pen.fillcolor("red")

# Functions
def draw_petal(size):
    pen.begin_fill()
    pen.circle(size, 60)
    pen.left(120)
    pen.circle(size, 60)
    pen.end_fill()

def draw_flower():
    pen.penup()
    pen.goto(0, -150)
    pen.pendown()

    for _ in range(6):
        draw_petal(70)
        pen.left(60)

    pen.penup()
    pen.goto(0, 0)
    pen.pendown()

    pen.color("green")
    pen.begin_fill()
    pen.circle(20)
    pen.end_fill()

# Drawing
draw_flower()

# Hide turtle
pen.hideturtle()

# Display
turtle.done()
