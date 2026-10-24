#include<iostream>
#include<string> //string includen 

int main()
{       
    //neuer syntax
    std::string einstring("Halllooo ");
     //ausgeben wie geowhnt
    std::cout << einstring << std::endl;
    //string muss nicht kann aber wie ein vector ausgegeben werden also in einer schleife
    // auch ungepruefter zugriff
    for (int i = 0; i < einstring.size(); i++)
        std::cout << einstring[i];
    std::cout << std::endl;
    // string zeichenweise index geprüft augeben
    for (int i = 0; i < einstring.size(); i++)
        std::cout << einstring.at(i);
    std::cout << std::endl;
    /*
    Die Pruefung geschieht wie bei einem Vektor. Ein Versuch, einstring.at(i) mit einem i ≥ einstring.size() abzufragen führt zu einem Programmabbruch mit fhelermeldung*/

    //kopie eines Strings einstring
    std::string eineStringKopie(einstring);
    std::cout << eineStringKopie << std::endl;

    //kopie durch Zuweisung
    std::string diesIstNeu("neu!");
    eineStringKopie = diesIstNeu;

    //Zuweisung einer Zeichenkette
    eineStringKopie = "Das ist eine Kopie";
    std::cout << eineStringKopie << std::endl;

    // einen char zuweisen und mit += verketten
    einstring = 'X';
    einstring += eineStringKopie;
    std::cout << einstring << std::endl;
    //mit + verketten
    einstring = eineStringKopie + "ABC";
    std::cout << einstring << std::endl;

    einstring = "ABC" + eineStringKopie;
    std::cout << einstring << std::endl;

    //folgendes geht nicht erklaerung irgendwann spaeter
   //einstring = "123" + "ABC"; 



}