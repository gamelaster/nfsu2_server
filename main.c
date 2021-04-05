#include <stdio.h>
#include <Windows.h>


typedef char(__cdecl* StartServer_S)(char*, int, int, int);

int main(int argc, char* argv[])
{
    HINSTANCE server = LoadLibraryA("server.dll");
    if (!server) {
        printf("Failed to load dll\n");
        return EXIT_FAILURE;
    }

    StartServer_S startServer = (StartServer_S)GetProcAddress(server, "StartServer");
    if (startServer("SERV", 0, NULL, NULL) == 0) {
        printf("Failed to start server!\n");
    }
    
    while (1) { Sleep(2000); }

    return 0;
}