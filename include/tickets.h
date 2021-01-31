#ifndef TICKETS_H
#define TICKETS_H

#include <iostream>
#include <string>

using namespace std;


class tickets
{
    public:
        tickets();
        virtual ~tickets();
        void checkTicketStatus();
        void editTicketDetails();
        void deleteTicket();
        void createTicket();

    protected:

    private:
};

#endif // TICKETS_H
