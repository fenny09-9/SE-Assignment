restaurants = ['Burger Hub', 'Pizza Point', 'Sushi House']
Delivery_time = [30, 25, 40]

for restaurant, time in zip(restaurants, Delivery_time):
    print(restaurant, "-", time, "min")