class Notification:
    def send(self):
        print("Sending notification")

class EmailNotification(Notification):
    def send(self):
        print("Sending notification by Email")

class SMSNotification(Notification):
    def send(self):
        print("Sending notification by SMS")
a = EmailNotification()
b = SMSNotification()
a.send()
b.send()