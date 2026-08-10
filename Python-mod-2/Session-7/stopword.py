text = "The player scored a goal and the team won in the match"

stopwords = ["the", "and", "in", "of", "a", "to", "is"]

words = text.lower().split()
word_counts = {}

for word in words:
    if word not in stopwords:
        word_counts[word] = word_counts.get(word, 0) + 1

print("Word Frequency:", word_counts)