try:
    price = int(input("Enter the price of the product: "))
    quantity = int(input("Enter the quantity of the product: "))
    total= price * quantity
    print("Total price of the product is: ", total)
except ValueError:
    print("Invalid input. Please enter numeric values for price and quantity.")