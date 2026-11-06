
#include <iostream>
#include <string>
#include <vector>
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

    scheduler.simulation(10);
    
    return 0;


    //     cout << "test Début" << endl;
    //     thread thr(update);
    //     // thread thr2(update);
    //     thr.detach();
    //     // thr2.join();


    //     cout << "test Fin" << endl;
                
    //     this_thread::sleep_for(chrono::milliseconds(5000));
}

