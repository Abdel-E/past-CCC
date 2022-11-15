# 5 stars for eaach point scored
# 3 stars taken for each foul commited
# every player number of points scored is greater than fouls commited

# determine how many players have a star rating greater than 40
# determine if team is gold team aka all players star rating is greater than 40

# total number of players on team
starP = 5
starF = -3

n = int(input())
numPlayers = 0
if n > 0:
    numPlayers = n

starRating = 0
playerList = [0] * numPlayers

# input per player
for i in range(numPlayers):
    # number of points scored
    p = int(input())
    # number of fouls commited
    f = int(input())
    # calculate star rating
    starRating = (p * starP) + (f * starF)
    playerList[i] = starRating

# determine how many players have a star rating greater than 40
greaterThan40 = 0

for i in range(numPlayers):
    if playerList[i] > 40:
        greaterThan40 += 1
if greaterThan40 == numPlayers:
    print(str(greaterThan40) + "+")
else:
    print(str(greaterThan40))
