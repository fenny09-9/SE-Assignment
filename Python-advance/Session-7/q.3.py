class ZomatoOrder:
    def add_item(self, item, quantity=1):
        print("Item:", item)
        print("Quantity:", quantity)

order = ZomatoOrder()
order.add_item("Pizza")
order.add_item("Burger", 3)