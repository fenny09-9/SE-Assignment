def video_views(titles, views):
    result = [(title, round(view, -3)) for title, view in zip(titles, views)]
    return result


titles = ["Python Tutorial", "Gaming Video", "Music Video"]
views = [125600, 234800, 567900]

print(video_views(titles, views))