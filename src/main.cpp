
// #include <iostream>
// #include <string>
// #include <vector> //Pour les tableaus dynamiques
// // #include <fstream> // Pour les écrire dans les fichiers
// #include "Server.hpp"
// #include "Sensor.hpp"

// using namespace std;


// int main() {
//     // Scheduler scheduler;
//     // while (1) {
//     //     scheduler.simuation();
//     // }
// // }


//     Server test;
//     Server test3(test);

//     // Server test2 = test;

//     // test.consoleWrite();
//     // test2.consoleWrite();
//     // test3.consoleWrite();

//     // Sensor<int> s();
//     // s.execute();

//     Sensor<int> s2(5);
//     s2.execute();
//     s2.update(10);
 
    
//     return 0;
// }




#include <iostream>
#include <thread>
#include <ctime>
#include <chrono> 

using namespace std;


void f()
{

    time_t now;
    struct tm * date;

    time(&now);
    date = localtime(&now);

    cout << "Local time : " << asctime(date);
}


void update()
{

    auto duree = chrono::seconds(5); // la variable à transmettre dans l'appelle de de la fonction update

    // 2. Enregistrer l'instant de départ
    auto debut = chrono::steady_clock::now();

    // 3. Boucler pendant la période impartie
    while (chrono::steady_clock::now() - debut < duree) {
        
        // Votre code à exécuter en boucle
        f();

        
        this_thread::sleep_for(chrono::milliseconds(1000)); // remplacer 1000 par le temps d'activation propre au capteur
    }

}


int main()
{

    cout << "test Début" << endl;
    thread thr(update);
    // thread thr2(update);
    thr.detach();
    // thr2.join();


    cout << "test Fin" << endl;
            
    this_thread::sleep_for(chrono::milliseconds(5000));
}
