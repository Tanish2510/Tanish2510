import turtle

pen = turtle.Turtle()


def ring(col, rad):
    pen.fillcolor(col)
    pen.begin_fill()
    pen.circle(rad)
    pen.end_fill()

pen.up()
pen.setpos(-35, 95)
pen.down()
ring('green', 15)  # Changing color to green for leaves

pen.up()
pen.setpos(35, 95)
pen.down()
ring('green', 15)  # Changing color to green for leaves

pen.up()
pen.setpos(0, 35)
pen.down()
ring('red', 40)  # Changing color to red for the center

pen.up()
pen.setpos(-18, 75)
pen.down()
ring('red', 8)  # Changing color to red for petals

pen.up()
pen.setpos(18, 75)
pen.down()
ring('red', 8)  # Changing color to red for petals

pen.up()
pen.setpos(-18, 77)
pen.down()
ring('white', 4)

pen.up()
pen.setpos(18, 77)
pen.down()
ring('white', 4)

pen.up()
pen.setpos(0, 55)
pen.down()
ring('red', 5)  # Changing color to red for petals

pen.up()
pen.setpos(0, 55)
pen.down()
pen.right(90)
pen.circle(5, 180)
pen.up()
pen.setpos(0, 55)
pen.down()
pen.left(360)
pen.circle(5, -180)
pen.hideturtle()

turtle.done()
