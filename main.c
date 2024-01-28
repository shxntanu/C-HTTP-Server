#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "Server.h"

void launch(struct Server *server) {
    char buffer[30000];
    while(1) {
        printf("Waiting for connection...\n");
        int address_length = sizeof(server->address);
        const int new_socket = accept(server->socket, (struct sockaddr*)&server->address, (socklen_t *)&address_length);
        read(new_socket, buffer, 30000);
        printf("%s\n", buffer);
        const char *hello = "HTTP/1.1 200 OK\nContent-Type: text/html\n<html>\n<head>\n<title>Example Server</title>\n</head>\n<body>\n<h1>This is an example server.</h1>\n<p>This server is running on port 80.</p>\n</body>\n</html>";
        write(new_socket, hello, strlen(hello));
        close(new_socket);
    }
}

int main() {
    struct Server server = server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY, 80, 10, launch);
    server.launch(&server);
}
