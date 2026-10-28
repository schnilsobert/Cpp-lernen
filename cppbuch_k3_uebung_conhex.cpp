#include<iostream>
#include<fstream>
#include<cstdlib>

int main()
{
    //definieren und öffnen der Eingabedatei
    std::ifstream Quelle; //Datentyp fuer Eingabestrom
    std::string Quelldateiname;
    std::cout << "Quelldatei? : ";
    std::cin >> Quelldateiname;

    Quelle.open(Quelldateiname.c_str(), std::ios::binary);
    /*
    Ohne std::ios::binary sind nur Textdateien kopierbar. Der Schalter std::ios::binary steuert, ob die Umwandlung der Zeilendekennung \n in \r\v beim Schreiben
     beziehungsweise zurück beim Lesen erfolgen soll (üblich bei MSDOS/Windows und Os/2). Die Funktion c_str() stellt den Quelldateinamen in einer für open 
     verträglichen Form dar, nämlich als C-String. C-Strings werden ab Seite 197 behandelt.
    */
    if (!Quelle) //Fehlerabfrage
    {
        std::cerr << Quelldateiname
                  << " kann nicht geöffnet werden!\n";
        exit(-1);

}

