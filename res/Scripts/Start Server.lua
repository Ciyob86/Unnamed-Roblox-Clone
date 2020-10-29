port = (53640)

server = game:getService("NetworkServer")
runGame = game:getService("RunService")
runGame:run()
server:start(port, 20)

function onJoined(newPlayer)
print "A player has joined the game"
newPlayer:LoadCharacter()
while true do
wait(0.01)
local humanoid = newPlayer.Character:FindFirstChild("Humanoid")
if(humanoid.Health == 0) then
	wait(5)
	newPlayer:LoadCharacter();
end
end
end

game.Players.PlayerAdded:connect(onJoined)
