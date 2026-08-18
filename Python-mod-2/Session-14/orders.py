orders = {
    101: {
        "restaurant": "Burger Hub",
        "items": ["Burger", "Fries"],
        "total": 450
    }
}


def add_order(order_id, restaurant, items, total):
    orders[order_id] = {
        "restaurant": restaurant,
        "items": items,
        "total": total
    }


def update_total(order_id, total):
    orders[order_id]["total"] = total


add_order(102, "Pizza Point", ["Pizza", "Coke"], 600)

update_total(102, 650)

print(orders)