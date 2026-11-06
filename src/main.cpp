
#include <iostream>
#include <string>

#include "Server.hpp"
#include "Sensor.hpp"
#include "Scheduler.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Temperature.h"
#include "SensorBase.hpp"

using namespace std;


int main() {

    Scheduler scheduler;

    Server server;

    Humidity h1(1000, &server); //temps en milliseconde + le pointeur vers le serveur
    Light l1(2000, &server); //temps en milliseconde + le pointeur vers le serveur
    Sound s1(500, &server); //temps en milliseconde + le pointeur vers le serveur
    Temperature t1(1000, &server); //temps en milliseconde + le pointeur vers le serveur
   
    scheduler.addSensor(&h1);
    scheduler.addSensor(&l1);
    scheduler.addSensor(&s1);
    scheduler.addSensor(&t1);

    scheduler.simulation(6); // Temps durant lequel les capteurs se mettent à jour
    
    return 0;

}