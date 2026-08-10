prices = [120, 250, 99, 180, 310]

updated_prices = list(map(lambda price: price + price * 10 / 100, prices))

print(updated_prices)