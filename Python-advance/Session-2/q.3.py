f = open("orders.txt","w")
f.write("Pizza\n")
f.write("Burger\n")
f.write("Pasta\n")
f.write("Biryani\n")
f.write("Momos\n")
f.close()

f = open("orders.txt","r")

line = f.readline()

while line != "":
    print(line.strip())
    print("Position:", f.tell())
    line = f.readline()

f.close()