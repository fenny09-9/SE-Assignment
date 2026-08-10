users = [('raj', 800), ('simran', 1500), ('veer', 1200), ('ananya', 950)]

k_users = list(filter(lambda user: user[1] > 1000, users))

for user in k_users:
    print(user[0])