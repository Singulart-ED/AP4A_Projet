#ifndef SERVER_H
#define SERVER_H

#include "Temperature.h"
#include "Sound.h"
#include "Humidity.h"
#include "Light.h"

class Server{
    public:
        Server();
        Server(const Server& b);

        ~Server();
        Server& operator=(const Server& b); 

        void consoleWrite();

        // void consoleWrite(Temperature temperature, Light light, Humidity humidite, Sound son);
        // void fileWrite(Temperature temperature, Light light, Humidity humidite, Sound son);
};

#endif // SERVER_H