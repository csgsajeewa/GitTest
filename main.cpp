
#include "POS.h"

int main(int argc, char** argv) {
    
    //get port number
    if (argc != 3) {
        cout << "usage pos <ip> <port>" << endl;
        return -1;
    }
    char* port = argv[2];
    char* Ip = argv[1];
    POS* pos = new POS();
    pos->start(Ip,port);
    return 0;

}
