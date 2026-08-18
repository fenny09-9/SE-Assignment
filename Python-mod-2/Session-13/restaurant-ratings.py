ratings = [
    [4, 5, 3, 2],
    [5, 4, 4, 3],
    [3, 2, 5, 5]
]

high_ratings = [rating for row in ratings for rating in row if rating > 4]

print(high_ratings)