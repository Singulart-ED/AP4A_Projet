
#include <iostream>
#include <string>
#include <vector> //Pour les tableaus dynamiques
// #include <fstream> // Pour les écrire dans les fichiers
#include "Server.hpp"
#include "Sensor.hpp"

using namespace std;


int main() {
    // Scheduler scheduler;
    // while (1) {
    //     scheduler.simuation();
    // }
// }


    Server test;
    Server test3(test);

    // Server test2 = test;

    // test.consoleWrite();
    // test2.consoleWrite();
    // test3.consoleWrite();

    Sensor<int> s();
    s.execute();
    // s.update(0);
 
    
    return 0;
}
