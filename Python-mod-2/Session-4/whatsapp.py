calls = (12, 5, 0, 20, 7, 3, 15)
calls = list(calls)
calls = [call for call in calls if call >= 5]
calls = tuple(calls)
print(calls)