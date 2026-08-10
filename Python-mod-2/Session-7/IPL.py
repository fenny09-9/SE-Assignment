def word_freq_dict(text):
    words = text.lower().split()
    word_counts = {}

    for word in words:
        word = word.strip(",.")
        word_counts[word] = word_counts.get(word, 0) + 1

    return word_counts


text = "Virat scored 100, Rohit scored 80, and Gill scored 50 in the IPL match"

print(word_freq_dict(text))