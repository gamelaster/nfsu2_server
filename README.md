# Need for Speed Underground 2 Standalone Server

[![msedge_2021-04-05_20-01-32](https://user-images.githubusercontent.com/1665373/113607702-d1b4d400-9649-11eb-8d98-a59fdf115969.jpg)](https://www.youtube.com/watch?v=zozUIaAEgfc)
(Click Image for YouTube video)

# Story

I wanted to reverse a NFS U2 a little bit. Even before putting exe to IDA, file `server.dll` catched my eye.
So instead, I imported this file, and it had only three exported functions `StartServer`, `StopServer` and `IsServerRunning`.

I messed little bit with it, and created absolutely stupid simple executable, which can start this server.
You need to have in same folder the server.cfg .
Note, that if you host server on same machine as client, client will not see the server.
This is something what I will maybe will take look on.
