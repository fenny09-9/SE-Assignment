import re
email = input("Enter email: ")
if re.match(r"^[a-z].*@gmail\.com$", email):
    print("Valid Gmail")
else:
    print("Invalid Gmail")