#ifndef SERVER_H
#define SERVER_H


class Server{
    public:
        Server();
        ~Server();

        void consoleWrite(float temperature, double light, double humidite, double son);
        void fileWrite(float Temperature, double light, double humidity, double son);
};

#endif // SERVER_H