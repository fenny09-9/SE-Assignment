user_bio = "Music lover | Foodie | Traveller"
count = 0
for ch in user_bio:
    if ch != " ":
        count = count + 1

print("Number of characters =", count)