import re

orders = ["ORD1234", "ORD5678", "ORD9999", "ORD0001"]

for order in orders:
    if re.match(r"^ORD\d*[02468]$", order):
        print(order)