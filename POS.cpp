#include "POS.h"
#include "Socket.h"
#define BUFFER_SIZE 1024

POS::POS() {

	cout << "mithra drohi kema, horen pizza kava" << endl;
	cout << "test branch"
}

POS::POS(const POS& orig) {
}

POS::~POS() {
}

void POS::start(char* ip, char* port) {
    clientSocket.connectToServer(ip, port);
    char* line;
    while (true) {
        //send part
        char input[BUFFER_SIZE];
        line = fgets(input, sizeof (input), stdin);
        line = strtok(line, "\n");
        string buffe(line);


        if (!clientSocket.sendMessage(buffe)) {
            cout << "send failed "<< endl;
        }

        if (buffe.compare("exit") == 0)
            break;

        //receive part

        ReceiveMessage* r = clientSocket.receive();   
        if (r->length == -1) {
            cout << "recv error"<< endl;
            break;
        } else if (r->length > 0) {
            r->message[r->length] = '\0';
            cout << ":" << r->message << endl;

        }
    }

}

