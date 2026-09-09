class Payment:
    def pay(self, amount):
        print("Paying", amount)

class UPI(Payment):
    def pay(self, amount):
        print("Paying", amount, "via UPI")

a = Payment()
b = UPI()

a.pay(500)
b.pay(500)