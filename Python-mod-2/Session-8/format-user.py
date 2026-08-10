def format_username(username, prefix="user_"):
    return prefix + username


print(format_username("fenny"))
print(format_username("fenny", "student_"))