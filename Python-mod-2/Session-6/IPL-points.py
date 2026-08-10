teams = ["CSK", "MI", "GT", "RCB"]
points = [10, 16, 12, 13]

team_points = dict(zip(teams, points))

for team in team_points:
    if team_points[team] > 10:
        print(team, "-", team_points[team])