class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email

class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers

class VerifiedInfluencer(Influencer):
    def __init__(self, username, email, followers, badge):
        super().__init__(username, email, followers)
        self.badge = badge

    def display_profile(self):
        if self.followers >= 1000000:
            followers = str(self.followers / 1000000) + "M"
        elif self.followers >= 1000:
            followers = str(self.followers / 1000) + "K"
        else:
            followers = str(self.followers)

        print("Username:", self.username)
        print("Followers:", followers)
        print("Badge:", self.badge)

person = VerifiedInfluencer("fenny", "fenny@gmail.com", 15000, "Verified")

person.display_profile()