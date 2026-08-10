def char_count_dict(text):
    char_counts = {}

    for char in text:
        char_counts[char] = char_counts.get(char, 0) + 1

    return char_counts
text = input("Enter a string: ")

char_counts = char_count_dict(text)
for char in sorted(char_counts):
    print(char, ":", char_counts[char])