class InstaStory:
    def share(self):
        print("Sharing an image story")


class WhatsAppStory(InstaStory):
    def share(self):
        print("Sharing a text status")


a = InstaStory()
b = WhatsAppStory()

a.share()
b.share()