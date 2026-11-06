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

        // void consoleWrite();

        void consoleWrite(  
            int temperature=std::numeric_limits<int>::quiet_NaN(), 
            int light=std::numeric_limits<int>::quiet_NaN(), 
            float humidite=std::numeric_limits<double>::quiet_NaN(), 
            float son=std::numeric_limits<double>::quiet_NaN()
        );

        void fileWrite(Temperature* temperature);
        void fileWrite(Light* light);
        void fileWrite(Humidity* humidite);
        void fileWrite(Sound* son);
    };

#endif // SERVER_H