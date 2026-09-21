#ifndef SERVER_H
#define SERVER_H


class Server{
    public:
        Server();
        Server(const Server& b);

        ~Server();
        Server& operator=(const Server& b); 

        void consoleWrite(float temperature, double light, double humidite, double son);
        void fileWrite(float Temperature, double light, double humidity, double son);
};

#endif // SERVER_H