import re

text = "Contact us at 9876543210 for help. Another number is 9988776655."

result = re.search(r"\d{10}", text)

if result:
    print("Mobile number:", result.group())