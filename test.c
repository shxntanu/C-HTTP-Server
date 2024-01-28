// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include "Server.h"
//
// void launch(Server *server) {
//     char buffer[30000];
//     printf("Waiting for connection...\n");
//     int addrlen = sizeof(server->address);
//     const int new_socket = accept(server->socket, (struct sockaddr*)&server->address, (socklen_t *)&addrlen);
//     read(new_socket, buffer, 30000);
//     printf("%s\n", buffer);
//     const char *hello = "HTTP/1.1 200 OK\nContent-Type: text/html\n<html>\n<head>\n<title>Example Server</title>\n</head>\n<body>\n<h1>This is an example server.</h1>\n<p>This server is running on port 80.</p>\n</body>\n</html>";
//     write(new_socket, hello, strlen(hello));
//     close(new_socket);
// }
//
// int main(void) {
//     Server server = server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY,  80, 10, launch);
//     server.launch(&server);
//     return 0;
// }
