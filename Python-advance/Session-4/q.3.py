class PaymentFailedError(Exception):
    pass
def process_payment(amount):
    if amount <= 0:
        raise PaymentFailedError
    print("Payment Successful")
try:
    process_payment(-100)
except PaymentFailedError:
    print("Payment Failed")