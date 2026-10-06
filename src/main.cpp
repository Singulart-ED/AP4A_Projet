
#include <iostream>
#include <string>
#include <vector> //Pour les tableaus dynamiques
// #include <fstream> // Pour les écrire dans les fichiers
#include "Server.hpp"
#include "Scheduler.h"

using namespace std;


int main() {
    Scheduler scheduler;
    while (1) {
        scheduler.simuation();
    }
}