#include "ServerSocket.h"
#include "Socket.h"
#define BUFFER_SIZE 1024
ServerSocket::ServerSocket() {
	change change change
}

ServerSocket::ServerSocket(const ServerSocket& orig) {
	no change no change no change
}

ServerSocket::~ServerSocket() {
	change happen here
}

/**
 * socket is created and bind to specified port
 * @param portNumber
 */
int ServerSocket::connect(char* portNumber) {

    char* port = portNumber;
    std::cout << "server is created on " << port << std::endl;

    if (getaddrinfo(NULL, port, &addr, &info) != 0) {
        std::cout << "unable to get address info" << std::endl;
        return -1;
    }

    serverSocketId = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocketId == -1) {
        std::cout << "unable to create socket at " << port << std::endl;
        return -1;
    }

    if (bind(serverSocketId, info->ai_addr, info->ai_addrlen) == -1) {
        std::cout << "unable to bind socket at " << port << std::endl;
        return -1;
    }
    std::cout << " Socket is successfully created"<< std::endl;
    freeaddrinfo(info);
    return 0;
}

int ServerSocket::run() {
   	int peer = accept(serverSocketId, (struct sockaddr*) &peeraddr, &addr_size);
    if (peer == -1) {
        std::cout << "unable to accept at that port" << std::endl;
        return -1;
    }
    std::cout << "connection received" << std::endl;
    socketId = peer;

	cout << hello keeammma << endl
    return 0;
}
