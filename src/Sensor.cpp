#include "Sensor.hpp"
#include "Server.hpp"
#include <cstdlib>
#include <iostream>
#include <chrono> 
#include <thread>



using namespace std;


// template <typename V>
// Sensor<V>::Sensor()
// {
//     value = V{};
//     m_ptrServer = nullptr;
//     m_period = 0;
//     m_type = "";
// }



template <typename V>
Sensor<V>::Sensor(int period)
{
    value = V{};
    m_ptrServer = nullptr;
    m_period = period;
    m_type = "";
}


template <typename V>
Sensor<V>::Sensor(const Sensor &s)
{
    value = s.value;
    m_period = s.m_period;
    m_type = s.m_type;
    m_ptrServer = new Server;
    *m_ptrServer = *s.m_ptrServer;
}

template <typename V>
Sensor<V>::~Sensor()
{
    delete m_ptrServer;
    m_ptrServer = nullptr;
}

template <typename V>
Sensor<V>& Sensor<V>::operator=(const Sensor<V> &b)
{

    if (this != &b) 
    {
        std::cout << "Creation d'un nouveau sensor par recopie" << std::endl;
    }

    return *this;
}



// template <typename V>
// void Sensor<V>::update(time_t t)
// {

//     if (t - timestamp >= m_period)
//     {
//         execute();
//         timestamp = t;
//     }

// }


template <typename V>
void Sensor<V>::update(int t)
{

    auto duree = chrono::seconds(t); // la variable à transmettre dans l'appelle de de la fonction update

    // 2. Enregistrer l'instant de départ
    auto debut = chrono::steady_clock::now();

    // 3. Boucler pendant la période impartie
    while (chrono::steady_clock::now() - debut < duree) {
        
        // Votre code à exécuter en boucle
        execute();

        
        this_thread::sleep_for(chrono::milliseconds(m_period)); // remplacer 1000 par le temps d'activation propre au capteur
    }

}


template <typename V>
void Sensor<V>::execute()
{
    srand(time(0));
    
    value = static_cast<V>(std::rand() % 101);

    std::cout << "Capteur " << m_id << " : valeur = " << value << std::endl;
    
}


template class Sensor<int>;
template class Sensor<float>;
template class Sensor<bool>;
