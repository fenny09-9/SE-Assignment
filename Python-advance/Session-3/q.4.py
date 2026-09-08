my_list = [1, 2, 3]
my_dict = {"a": 1}
try:
    print(my_list[5])
    print(my_dict["b"])
except IndexError:
    print("List index is not available")
except KeyError:
    print("Key is not available")