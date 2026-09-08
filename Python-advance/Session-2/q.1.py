f = open("lyrics.txt", "w")
f.write("I got my peaches out in Georgia")
f.close()

f = open("lyrics.txt", "r")
print("Before:", f.tell())
print(f.read(10))
print("After:", f.tell())
f.close()