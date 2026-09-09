import re

def extract_hashtags(text):
    return re.findall(r"#\w+", text)

caption = "Enjoying today! #fun #friends #instagram"

print(extract_hashtags(caption))