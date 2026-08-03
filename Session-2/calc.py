a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=input("Enter operation (+, -, *, /): ")

if c=='+':
    print("Sum =", a + b)
elif c=='-':
    print("Difference =", a - b)
elif c=='*':
    print("Product =", a * b)
elif c=='/':
    print("Quotient =", a / b)
else:
    print("Error: Invalid operation.")