local server = ("localhost") -- The IP or hostname of the server
local serverport = (53640) -- the port the server is using - This should be given to you by the person hosting the server.
local clientport = 0 -- Leave this as zero unless you have reason to change it.

function Displayerror(errmsg)
game:SetMessage(errmsg)
wait(math.huge)
end

local err1, err2= pcall(function()
client = game:GetService("NetworkClient")
player = game:GetService("Players"):CreateLocalPlayer()
player:SetSuperSafeChat(false)
end)

if not err21 then
Displayerror(err22)
end

function connected(url, replicator)
	replicator.Disconnection:connect(disconnect)
	local marker = nil
	pcall(function()
		game:SetMessageBrickCount()
		marker = replicator:SendMarker()
	end)

	marker.Received:connect(function()
		pcall(function()
			game:ClearMessage()
		end)		
	end)
end

function rejected()
Displayerror("You have been rejected from the server.")
end

function failed(peer, errcode, why)
Displayerror("Failed [".. peer.. "], ".. err2code.. ": ".. why)
end

local err1, err2 = pcall(function()
client.ConnectionAccepted:connect(connected)
client.ConnectionRejected:connect(rejected)
client.ConnectionFailed:connect(failed)
client:Connect(server, serverport, clientport, 20)
end)

if not err1 then
local x = Instance.new("Message")
x.Text = err2
x.Parent = workspace
wait(math.huge)
end
