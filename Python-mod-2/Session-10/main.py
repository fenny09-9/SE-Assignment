from playlist import add_song, remove_song, display_playlist

playlist = []

add_song("Kesariya", playlist)
add_song("Shape of You", playlist)
add_song("Believer", playlist)

print("Playlist:")
display_playlist(playlist)

remove_song("Shape of You", playlist)

print("\nAfter removing Shape of You:")
display_playlist(playlist)