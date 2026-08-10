review = """I love Zomato because the food is good.
Zomato delivery is fast and the food is fresh."""

review = review.lower()

for char in ",.!?":
    review = review.replace(char, "")

words = review.split()
word_counts = {}

for word in words:
    word_counts[word] = word_counts.get(word, 0) + 1

print("Word Frequency:", word_counts)