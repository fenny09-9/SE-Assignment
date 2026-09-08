def book_movie_ticket(tickets):
    wallet = 1000

    try:
      print("Price per ticket:", wallet / tickets)
    except ZeroDivisionError:
        print("Cannot book tickets. Number of tickets cannot be zero.")
    except ValueError:
        print("Invalid input. Please enter a valid number of tickets.")

book_movie_ticket(0)