
#include <iostream>
#include <string>
#include <vector> //Pour les tableaus dynamiques
// #include <fstream> // Pour les écrire dans les fichiers
#include "Server.hpp"

using namespace std;


int main() {


    cout << "Hello World !" << endl;

    Server test;
    Server test3(test);

    Server test2 = test;

    test.consoleWrite();
    test2.consoleWrite();
    test3.consoleWrite();

    return 0;
}




    // if (__cplusplus == 202302L) std::cout << "C++23";
    // else if (__cplusplus == 202002L) std::cout << "C++20";
    // else if (__cplusplus == 201703L) std::cout << "C++17";
    // else if (__cplusplus == 201402L) std::cout << "C++14";
    // else if (__cplusplus == 201103L) std::cout << "C++11";
    // else if (__cplusplus == 199711L) std::cout << "C++98";
    // else if (__cplusplus == 202100L) std::cout << "C++2b (GCC 13)\n";
    // else std::cout << "pre-standard C++." << __cplusplus;
    // std::cout << "\n";


//   vector<double> arrayNotes;

//     string const fichierNotes("/media/enzo/DATA/Commun DATA (D)/c++/HelloWorld/fichiers/notes.txt");

    // ifstream fluxNotesLecture(fichierNotes.c_str()); //  le 2ème paramètre "append", verbe anglais qui signifie "ajouter à la fin".

    // if(fluxNotesLecture) { //On teste si tout est OK

    //     string ligne;

    //     while(getline(fluxNotesLecture, ligne)) { //Tant qu'on n'est pas à la fin, on lit
        
    //         cout << ligne << endl;

    //         double mydouble = stod(ligne);

    //         arrayNotes.push_back(mydouble);
    //     }
    
    // } else {

//         cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

//     }

//     double average = 0;
//     double bestNote = 0;
//     double worstNote = 20;

//     for (double i: arrayNotes) {

//         std::cout << i << ' ';

//         average += i;

//         if (i > bestNote) { bestNote = i; }
//         if (i < worstNote) { worstNote = i; }

//     }

//     cout << endl;

//     average /= arrayNotes.size();

//     cout << "La moyenne est de : " << average << endl;
//     cout << "La meilleur note est : " << bestNote << endl;
//     cout << "La pire note est : " << worstNote << endl;
    








//     vector<int> arrayNumber;

//     for (int i = 0; i < 10; i++) {
        
//         int userNumber = 0;

//         cout << "Entrez le nombre : " << i + 1 << endl;

//         cin >> userNumber;
//         cin.ignore();

//         arrayNumber.push_back(userNumber);
//     }

//     string const fichierNombres("/media/enzo/DATA/Commun DATA (D)/c++/HelloWorld/fichiers/nombres.txt");

//     ofstream fluxNombres(fichierNombres.c_str(), ios::app); //  le 2ème paramètre "append", verbe anglais qui signifie "ajouter à la fin".

//     if(fluxNombres) { //On teste si tout est OK

//         // Affiche le contenu du tableau
//         for (int i: arrayNumber) {

//             std::cout << i << ' ';

//             fluxNombres << i << endl;
//         }
    
//     } else {

//         cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

//     }

//     cout << endl;

//     arrayNumber.clear();

//     ifstream fluxNombresLecture(fichierNombres.c_str()); //  le 2ème paramètre "append", verbe anglais qui signifie "ajouter à la fin".


//     if(fluxNombresLecture) { //On teste si tout est OK

//         string ligne;


//         while(getline(fluxNombresLecture, ligne)) { //Tant qu'on n'est pas à la fin, on lit
        
//             cout << ligne << endl;

//             int myint = stoi(ligne);

//             arrayNumber.push_back(myint);
//         }
    
//     } else {

//         cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

//     }



//     for (int i: arrayNumber) {

//         std::cout << i << ' ';

//     }

//     cout << endl;
//     cout << endl;



//     string const nomFichier("/media/enzo/DATA/Commun DATA (D)/c++/HelloWorld/fichiers/journal.txt");

//     ofstream monFlux(nomFichier.c_str(), ios::app); //  le 2ème paramètre "append", verbe anglais qui signifie "ajouter à la fin".

//     if(monFlux) { //On teste si tout est OK
   
//         cout << "Entrez une phrase :" << endl;


//         string userInput = "";

//         getline(cin, userInput);


//         monFlux << userInput << endl;


//         ifstream lectureFichier("/media/enzo/DATA/Commun DATA (D)/c++/HelloWorld/fichiers/journal.txt");

        
//         string ligne; //Une variable pour stocker les lignes lues

//         cout << endl << "Contenu du journal :" << endl;


//         int totalNumberOfLine = 0;
//         int totalNumberOfChar = 0;


//         while(getline(lectureFichier, ligne)) { //Tant qu'on n'est pas à la fin, on lit
        
//             totalNumberOfLine++;

//             cout << ligne << endl;
//             totalNumberOfChar += ligne.length();
//         }

//         cout << endl << "Nombre total de ligne : " << totalNumberOfLine << endl;
//         cout << endl << "Nombre total de charactère : " << totalNumberOfChar << endl;


//         lectureFichier.clear();          // enlève l'état "fin de fichier"
//         lectureFichier.seekg(0, ios::beg); // retourne au début

//         char caractere2;
//         int total = 0;

//         while (lectureFichier.get(caractere2))
//         {
//             total++;
//         }

//         cout << total << endl;

        
//     } else {

//         cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

//     }











    // string userInput;

    // cout << "Veuillez entrer un mot : ";

    // cin >> userInput;
    // cin.ignore();

    // string userInputReverse;

    // cout << userInput.size() << endl;


    // for (int i = userInput.size(); i >= 0; i--) {

    //     cout << userInput[i] << endl;

        
    //     userInputReverse.push_back(userInput[i]);

    // }

    // cout << userInputReverse << endl;
  


// Exo 1

// #include <iostream>
// #include <string>
// #include <vector> //Ne pas oublier ! Pour les tableaus dynamiques


// using namespace std;


// int main() {

//     vector<int> arrayNumber;

//     arrayNumber.push_back(5);
//     arrayNumber.push_back(12);
//     arrayNumber.push_back(8);
//     arrayNumber.push_back(19);
//     arrayNumber.push_back(3);


//     for (int i = 0; i < arrayNumber.size(); i++)
//     {
//         cout << arrayNumber[i] << endl;
//     }
  
//     return 0;
// }


// Exo 2

// #include <iostream>
// #include <string>
// #include <vector> //Ne pas oublier ! Pour les tableaus dynamiques


// using namespace std;


// int main() {

//     double userValue = 0;

//     vector<double> arrayDecimalNumber;

//     for (int i = 0; i < 5; i++) 
//     {
//         cout << "Entrez la note " << i + 1 << " : ";
//         cin >> userValue;
//         cin.ignore();
//         arrayDecimalNumber.push_back(userValue);
//     }
    
//     double moyenne = 0;

//     for (int i = 0; i < arrayDecimalNumber.size(); i++)
//     {
//         moyenne += arrayDecimalNumber[i];
//     }
    

//     moyenne /= arrayDecimalNumber.size();

//     cout << "La moyenne est de : " << moyenne << endl;
  
//     return 0;
// }





// Exo 3


// #include <iostream>
// #include <string>
// #include <vector> //Ne pas oublier ! Pour les tableaus dynamiques


// using namespace std;


// int main() {

//     double userValue = 0;

//     vector<int> arrayNumber;

//     arrayNumber.push_back(18);
//     arrayNumber.push_back(4);
//     arrayNumber.push_back(27);
//     arrayNumber.push_back(11);
//     arrayNumber.push_back(39);
//     arrayNumber.push_back(7);


//     int biggestNumber = arrayNumber[0];

//     for (int i = 0; i < arrayNumber.size(); i++)
//     {
//         if (biggestNumber < arrayNumber[i]) {
//             biggestNumber = arrayNumber[i];
//         }
//     }
    

//     cout << "Le plus grand nombre est : " << biggestNumber << endl;
  
//     return 0;
// }










// // Exo 5

// #include <iostream>
// #include <string>
// #include <vector> //Ne pas oublier ! Pour les tableaus dynamiques


// using namespace std;


// int main() {

//     string userInput;

//     cout << "Veuillez entrer un mot : ";

//     cin >> userInput;
//     cin.ignore();

//     string userInputReverse;

//     cout << userInput.size() << endl;


//     for (int i = userInput.size(); i >= 0; i--) {

//         cout << userInput[i] << endl;

        
//         userInputReverse.push_back(userInput[i]);

//     }

//     cout << userInputReverse << endl;
  
//     return 0;
// }
















// #include "math.hpp"


    // vector<int> tableau(5,4);

    // int sizeTableau = tableau.size();

    // cout << sizeTableau << endl;

    // tableau.push_back(8); // ajoute un élément à la fin du tableau
    // tableau.pop_back(); // supprimer le 1er élément du tableau
    // tableau.pop_back(); // supprimer le 1er élément du tableau
    // tableau.pop_back(); // supprimer le 1er élément du tableau

    // sizeTableau = tableau.size();

    // cout << sizeTableau << endl;

    // cout << tableau[0] << endl;


    // const int lengthArrayNotes = 6;

    // double arrayNotes[lengthArrayNotes];

    // arrayNotes[0] = 12.5;
    // arrayNotes[1] = 19.5;  //Bieeeen !
    // arrayNotes[2] = 6.;    //Pas bien !
    // arrayNotes[3] = 12;
    // arrayNotes[4] = 14.5;
    // arrayNotes[5] = 15;

    // double moyennne = 0;

    // for (int i = 0; i < lengthArrayNotes; i++)
    // {

    //     moyennne += arrayNotes[i];
    // }
    
    // cout << moyennne / lengthArrayNotes << endl;



    // cout << nombreDeSecondes(1) << endl;

    // int largeur, hauteur;

    // string symbole = "*";

    // cout << "Largeur du rectangle : ";
    // cin >> largeur;
    // cin.ignore();

    // cout << "Hauteur du rectangle : ";
    // cin >> hauteur;
    // cin.ignore();

    // cout << "Choisissez le symbole parmi :  * - + /" << endl << "Votre choix : ";
    // cin >> symbole;
    // cin.ignore();


    // if (!symbole.contains("*") and !symbole.contains("-") and !symbole.contains("+") and !symbole.contains("/")) {
        
    //     cout << "Symbole non valide" << endl; 
    //     cout << "Symbole utilisé : *" << endl; 

    //     symbole = "*";

    // }

    
    // if (largeur < 0) {

    //     cout << "Erreur largeur négative" << endl; 

    // } else if (hauteur < 0) {

    //     cout << "Erreur hauteur négative" << endl; 

    // } else {

    //     dessineRectangle(largeur, hauteur, symbole);

    // }

                     
    // cout << "Hauteur du rectangle : " <<  ajouteDeux(hauteur) << endl;


// // Définition de la fonction
// int nombreDeSecondes(int heures, int minutes, int secondes)
// {
//     int total = 0;

//     total = heures * 60 * 60;
//     total += minutes * 60;
//     total += secondes;

//     return total;
// }



// #include<iostream>

// int main() {
//     if (__cplusplus == 202302L) std::cout << "C++23";
//     else if (__cplusplus == 202002L) std::cout << "C++20";
//     else if (__cplusplus == 201703L) std::cout << "C++17";
//     else if (__cplusplus == 201402L) std::cout << "C++14";
//     else if (__cplusplus == 201103L) std::cout << "C++11";
//     else if (__cplusplus == 199711L) std::cout << "C++98";
//     else std::cout << "pre-standard C++." << __cplusplus;
//     std::cout << "\n";

// //     #if __cplusplus == 202100L
// //     std::cout << "C++2b (GCC 13)\n";
// // #elif __cplusplus >= 202302L
// //     std::cout << "C++26\n";
// // #else
// //     std::cout << __cplusplus << '\n';
// // #endif

// }





// void dessineRectangle(int l, int h, string symbole) {

//     for(int ligne(0); ligne < h; ligne++) {

//         for(int colonne(0); colonne < l; colonne++) {
//             cout << symbole;
//         }

//         cout << endl;
//     } 
// }

// // Prototype de la fonction
// int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);













// #include <iostream>  // inclure et charger la bibliothèque
// #include <string>

// using namespace std; // Pour dire que je vais utiliser std afin d'utiliser les fonction count endl etc... dans la librairie std, pour eviter d'écrire std::cout

// void sayHello() {
//     cout << "Bonjour à vous." << endl;
// }


// int numberPlusTwo(int nombre) { // fonction à definir avant de l'appeler dans le main

//     return nombre + 2;

// }


// int main() {

//     sayHello();
   
//     int userNumber = 0;
//     cout << "Veuillez mettre un nombre entier : " << endl;

//     cin >> userNumber;
//     cin.ignore(); // normalement pour ignorer le reste des choses entrée dans cin mais ça fonctionne bizarrement
//     cout << "Nombre choisis : " << userNumber << endl;


//     int result = numberPlusTwo(userNumber); 

//     cout << "Le nombre " << userNumber << " + 2 = " << result << endl;

//     return 0; // indique que le programme est finit, le 0 indique tout c'est bien terminé


// }









    // int age;
    // string description = "TEST";

    // cout << "Quel age avez-vous ?" << endl;

    // cin >> age;
    // cin.ignore(); // normalement pour ignorer le reste des choses entrée dans cin mais ça fonctionne bizarrement


    // cout << "Vous avez : " << age << " ans" << endl;

    // if (age >= 18 and age < 100) {

    //     cout << "Vous êtes majeur" << endl;

    // } else if (age > 0 and age < 18) { // and   or   not

    //         cout << "Vous êtes mineur" << endl;

    // } else {
    //                 cout << "Vous n'existez pas" << endl;

    // }

    // cout << "Une description ?" << endl;


    // getline(cin, description); // pour récupérer les string

    // cout << "Votre description : " << description << endl;


    // cout << "Je fais des tests pour apprendre le C++ !" << endl;
    // cout << boolean << endl;
    // cout << maVariable << endl;

    // cout << charactere << endl;
    // cout << uneString << endl;
    // cout << nombreEntier << endl;
    // cout << nombreEntierPositif << endl;
    // cout << nombreDecimal << endl;
    // cout << "\"" << endl;
    // cout << "\\" << endl;
    // endl crée un retour à la ligne dans la console.
    // séparer chaque morceau de texte par les chevrons <<





 // cout -> c out permet d'afficher dans la console du texte / cout est fourni par iostream
    // On met des ; à la fin des instructions


    // bool boolean = true;

    // char charactere = 'a'; // Pour un char il faut un apostrophe ''

    // int nombreEntier = -5;

    // unsigned int nombreEntierPositif = 10;

    // double nombreDecimal = 2.35;

    // string uneString = "Une chaîne de caractères"; // Pour une string il faut des guillemets ""


    // int& maVariable(nombreEntier); //Déclaration d'une référence nommée maVariable qui est accrochée à la variable ageUtilisateur

/*

Addition

+

resultat = a + b;

Soustraction

-

resultat = a - b;

Multiplication

*

resultat = a * b;

Division

/

resultat = a / b;

Modulo

%

resultat = a % b;

*/

/*Le code qui suit est un peu complexe
alors je prends mon temps pour l'expliquer
parce que je sais que sinon, dans quelques semaines,
j'aurai tout oublié et je serai perdu pour le modifier*/
