titles = ["3 Idiots", "Dangal", "Jawan"]
genres = ["Comedy", "Sports", "Action"]
ratings = [4.5, 4.7, 4.2]

movies = []

for title, genre, rating in zip(titles, genres, ratings):
    movie = {
        "title": title,
        "genre": genre,
        "rating": rating
    }
    movies.append(movie)
print(movies)