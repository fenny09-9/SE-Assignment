class InvalidCouponCodeError(Exception):
    pass
codes = ["SAVE50", "FOOD20", "NEWUSER"]
try:
    coupon = input("Enter coupon code: ")
    if coupon not in codes:
        raise InvalidCouponCodeError
    print("Coupon applied successfully")
except InvalidCouponCodeError:
    print("Invalid coupon code")