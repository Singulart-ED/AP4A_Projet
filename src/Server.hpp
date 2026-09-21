#ifndef SERVER_H
#define SERVER_H

class Server
{
    public:
        Server();
        Server(const Server& b);

        ~Server();

        Server& operator=(const Server& b); 

        void consoleWrite();
        void fileWrite();
};

#endif // SERVER_H