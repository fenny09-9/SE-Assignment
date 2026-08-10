def book_movie_ticket(movie_name, seat_type="Regular", snacks=None):
    print("Movie:", movie_name)
    print("Seat:", seat_type)
    print("Snacks:", snacks)
    print()


book_movie_ticket("Jawan")

book_movie_ticket(movie_name="Pathaan", seat_type="VIP", snacks="Popcorn")

book_movie_ticket("Jawan", snacks="Nachos", seat_type="VIP")