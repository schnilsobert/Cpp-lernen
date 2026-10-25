#include<iostream>
#include<fstream>
#include<cstdlib> //fuer exit

int main()
{
        // Definieren und Öffnen der Eingangsdatei
    std::ifstream Quelle; // Datentyp für Engabestrom (s.o.)
    std::string Quelldateiname;
    std::cout << "Quelldatei? ";
    std::cin >> Quelldateiname;

    //Datei öffnen
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

    std::string Zieldateiname;
    std::cout << "Zieldatei? ";
    std::cin >> Zieldateiname;
    // Definieren und öffnen der Ausgabedatei hier in einem Schritt
    std::ofstream Ziel(Zieldateiname.c_str(), std::ios::binary);

    if (!Ziel)
    {
        std::cerr << Zieldateiname
                  << " kann nicht geoeffnet werden!\n";
        exit(-1);
    }
    char ch;
    while (Quelle.get(ch))
        Ziel.put(ch); //        zeichenweise kopieren

} //Dateien werden am Programmende automatisch geschlossen.
