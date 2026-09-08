class SongAlreadyExistsError(Exception):
    pass
def add_song_to_playlist(song_name, playlist):
    if song_name in playlist:
        raise SongAlreadyExistsError
    playlist.append(song_name)
playlist = ["Starboy", "Perfect", "Freaks"]
try:
    add_song_to_playlist("Starboy", playlist)
    print("Song added")
except SongAlreadyExistsError:
    print("Song already exists")