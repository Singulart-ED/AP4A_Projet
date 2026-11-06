#include "Server.hpp"
#include "Temperature.h"
#include "Light.h"
#include "Humidity.h"
#include "Sound.h"


#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

Server::Server()
{
    cout << "Creation du serveur\n";
}

Server::Server(const Server& b)
{
    cout << "Creation du serveur a l aide d'un autre serveur\n";
}

Server::~Server()
{
    cout << "Destruction du serveur\n";
}

Server& Server::operator=(const Server& b)
{
    if (this != &b)
    {
        cout << "Creation d'un nouveau serveur par recopie" << endl;
    }
    return *this;
}


void Server::consoleWrite(int temperature, int light, float humidite, float son)
{
    cout << "--- Donnees recues des capteurs ---" << endl;
    if (temperature > 0 && temperature < 41) cout << "Temperature : " << temperature << " °C" << endl;
    if (light == 0 || light == 1)  cout << "Luminosite  : " << (light ? "Allume (1)" : "Eteint (0)") << endl;
    if (!std::isnan(humidite)) cout << "Humidite    : " << humidite << " %" << endl;
    if (!std::isnan(son)) cout << "Son         : " << son << " dB" << endl;
    cout << "-----------------------------------" << endl;
}


void Server::fileWrite(Temperature* temperature)
{
    // Écriture de la Température dans temperature.log
    ofstream logTemp("../temperature.log", ios::app);
    if (logTemp) {
        logTemp << "ID: " << temperature->getId()
                << " | Type: " << temperature->getType()
                << " | Valeur: " << temperature->getVal() << " °C" << endl;
    } else {
        cerr << "Erreur : ouverture de temperature.log impossible." << endl;
    }

    cout << "Ecriture dans les fichiers de logs effectuee." << endl;
}


void Server::fileWrite(Light* light)
{
    // Écriture de la Lumière dans light.log
    ofstream logLight("../light.log", ios::app);
    if (logLight) {
        logLight << "ID: " << light->getId()
                 << " | Type: " << light->getType()
                 << " | Valeur: " << (light->getVal() ? "true" : "false") << endl;
    } else {
        cerr << "Erreur : ouverture de light.log impossible." << endl;
    }

    cout << "Ecriture dans les fichiers de logs effectuee." << endl;
}


void Server::fileWrite(Humidity* humidite)
{
    // Écriture de l'Humidité dans humidity.log
    ofstream logHum("../humidity.log", ios::app);
    if (logHum) {
        logHum << "ID: " << humidite->getId()
               << " | Type: " << humidite->getType()
               << " | Valeur: " << humidite->getVal() << " %" << endl;
    } else {
        cerr << "Erreur : ouverture de humidity.log impossible." << endl;
    }

    cout << "Ecriture dans les fichiers de logs effectuee." << endl;
}



void Server::fileWrite(Sound* son)
{
    // Écriture du Son dans sound.log
    ofstream logSound("../sound.log", ios::app);
    if (logSound) {
        logSound << "ID: " << son->getId()
                 << " | Type: " << son->getType()
                 << " | Valeur: " << son->getVal() << " dB" << endl;
    } else {
        cerr << "Erreur : ouverture de sound.log impossible." << endl;
    }

    cout << "Ecriture dans les fichiers de logs effectuee." << endl;
}