#ifndef PAJEPENDINGENDCOMMUNICATION_H
#define PAJEPENDINGENDCOMMUNICATION_H

#include "pajependingcommunication.h"

namespace prv2paje{

    class PajePendingEndCommunication : public PajePendingCommunication
    {
    public:
        PajePendingEndCommunication();
        PajePendingEndCommunication(double timestamp);
        string className();
    };

}

#endif // PAJEPENDINGENDCOMMUNICATION_H