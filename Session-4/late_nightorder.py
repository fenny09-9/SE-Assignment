age = int(input("Enter your age: "))
time = int(input("Enter current time (0-23): "))

if age >= 18 and (time >= 22 or time <= 2):
    print("Order allowed")
else:
    print("Order not allowed")