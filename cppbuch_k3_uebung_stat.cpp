#include<iostream>
#include<fstream>
#include<cstdlib> //fuer exit

int main()
{
        // Definieren und Öffnen der Eingangsdatei
    std::ifstream Quelle; // Datentyp für Eingabestrom (s.o.)
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
    char ch;
    int number_of_lines = 1;
    int zeichen = 0;
    while(Quelle.get(ch))
    {
        //Quelle.get(ch);
        //std::cout << ch;
            //zeilen zaehlen
            if (ch == '\n'){
                ++number_of_lines;
            }
            if (ch != ' ' && ch != '\n' && ch != '\r' && ch != '\t')
            {
                ++zeichen;
            }

    }
    Quelle.clear();
    Quelle.seekg(0);

    std::string wort;
    int wort_count = 1;
    while (Quelle >> wort)
        {
            ++wort_count;
        }

    std::cout << std::endl << "Statistik der Datei '" << Quelldateiname << "': " <<std::endl
              << "Anzahl der Zeilen:   " << number_of_lines
              << std::endl << "Anzahl der Zeichen: " << zeichen << std::endl
              << "Anzahl der Wörter:  " << wort_count << std::endl;

} //Dateien werden am Programmende automatisch geschlossen.
