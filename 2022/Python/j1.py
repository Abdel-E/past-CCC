r = 8  # regular box holds 8 cupcakes
s = 3  # small box holds 3 cupcakes
students = 28  # number of students

# Collect input of small and regular boxes
in1 = int(input())
in2 = int(input())

if in1 >= 0:
    rBoxes = in1
if in2 >= 0:
    sBoxes = in2

# Determine how many cupcakes remain if every student gets 1 cupcake
remaining = (rBoxes * r) + (sBoxes * s) - students

print(remaining)
