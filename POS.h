#ifndef POS_H
#define	POS_H

#include "ClientSocket.h"
#include <string>

using namespace std;

class POS {
public:
    POS();
    POS(const POS& orig);
    virtual ~POS();
    void start(char* ip, char* port);
private:
    ClientSocket clientSocket;

};

#endif	/* POS_H */

