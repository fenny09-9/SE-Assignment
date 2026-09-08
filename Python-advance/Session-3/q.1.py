songs ={
    "Thinking of You": "3:23",
    "Dance Monkey" : "3:29",
    "Teenage Dream" : "3:45"
}
def get_song_duration(song):
    try:
        print(songs[song])
    except KeyError:
        print("Song not found")
        
get_song_duration("Thinking of You")