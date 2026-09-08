def read_next_line(filename):
    f = open(filename, "r")
    f.seek(20)
    line = f.readline()
    print(line)
    f.close()

read_next_line("lyrics.txt")