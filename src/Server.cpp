#include "Server.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Server::Server()
{
    std::cout << "Creation du serveur\n";
};



Server::~Server()
{
    std::cout << "Destruction du serveur\n";
};


void Server::consoleWrite(float temperature, double light, double humidite, double son)
{
    cout << temperature << ";" << light << ";" << humidite << ";" << son << ";" << endl;
    cout << "Ecriture effectuee\n";
};


void Server::fileWrite(float temperature, double light, double humidite, double son){
    //Temperature
    string const fichierNotes("../log.csv");
    ofstream monFlux(fichierNotes.c_str(), ios::app);
    if (monFlux) {
        monFlux << temperature << ";" << light << ";" << humidite << ";" << son << ";" << endl;
        cout << "Ecriture effectuee\n";
    }else {
        cout << "Erreur lors de l'ouverture du fichier de temperature\n";
    }
};