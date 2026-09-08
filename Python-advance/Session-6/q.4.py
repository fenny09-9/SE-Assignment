class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers


class Brand:
    def __init__(self, brand_name):
        self.brand_name = brand_name


class BrandPartner(Influencer, Brand):
    def __init__(self, username, email, followers, brand_name):
        Influencer.__init__(self, username, email, followers)
        Brand.__init__(self, brand_name)

person = BrandPartner("fenny", "fenny@gmail.com", 15000, "Nike")
print(person.username)
print(person.followers)
print(person.brand_name)