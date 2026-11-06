
#include <iostream>
#include <string>
#include <vector> //Pour les tableaus dynamiques
#include "Server.hpp"
#include "Sensor.hpp"
#include "Scheduler.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Temperature.h"

using namespace std;


int main() {

    Scheduler<int> scheduler;

    Server test;

    Humidity h1(1000, &test); //temps en milliseconde
    Light l1(1000, &test); //temps en milliseconde
    Sound s1(1000, &test); //temps en milliseconde
    Temperature t1(1000, &test); //temps en milliseconde
    h1.execute();
    l1.execute();
    s1.execute();
    t1.execute();
 
    // h1.update(5);

    // Sensor<int> s1(1000, &test); //temps en milliseconde
    // Sensor<int> s2(2000, &test); //temps en milliseconde

    // scheduler.addSensor(h1);
    // scheduler.addSensor(&s2);

    // scheduler.simulation(4);
    
    return 0;
}





//// Pour faire des fonctions async

// #include <iostream>
// #include <thread>
// #include <chrono> 

// using namespace std;


// void f()
// {

//     cout << "Local test" << endl;
// }


// void update()
// {

//     auto duree = chrono::seconds(5); // la variable à transmettre dans l'appelle de de la fonction update

//     // 2. Enregistrer l'instant de départ
//     auto debut = chrono::steady_clock::now();

//     // 3. Boucler pendant la période impartie
//     while (chrono::steady_clock::now() - debut < duree) {
        
//         // Votre code à exécuter en boucle
//         f();

        
//         this_thread::sleep_for(chrono::milliseconds(1000)); // remplacer 1000 par le temps d'activation propre au capteur
//     }

// }


// int main()
// {

//     cout << "test Début" << endl;
//     thread thr(update);
//     // thread thr2(update);
//     thr.detach();
//     // thr2.join();


//     cout << "test Fin" << endl;
            
//     this_thread::sleep_for(chrono::milliseconds(5000));
// }
