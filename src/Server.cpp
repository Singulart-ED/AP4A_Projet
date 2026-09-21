#include "Server.hpp"
#include <iostream>

Server::Server()
{
    std::cout << "Creation du serveur\n";
};

Server::Server(const Server& b)
{
    std::cout << "Creation du serveur a l aide d'un autre serveur\n";
};


Server::~Server()
{
    std::cout << "Destruction du serveur\n";
};


Server& Server::operator=(const Server& b)
{

    if (this != &b) 
    {
        std::cout << "Creation d'un nouveau serveur par recopie" << std::endl;
    }

    return *this;
}


void Server::consoleWrite()
{
    std::cout << "Donnee recue\n";
};


void Server::fileWrite()
{
    std::cout << "Ecriture en cours\n";


};