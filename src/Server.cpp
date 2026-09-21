#include "Server.hpp"
#include <iostream>

Server::Server()
{
    std::cout << "Creation du serveur\n";
};



Server::~Server()
{
    std::cout << "Destruction du serveur\n";
};


void Server::consoleWrite()
{
    std::cout << "Donnee recue\n";
};


void Server::fileWrite()
{
    std::cout << "Ecriture en cours\n";


};