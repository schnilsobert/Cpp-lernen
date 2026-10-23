#include<iostream>
#include<vector>

int main()
{
    std::vector<int> meineDaten;
    std::cout << "Bitte Daten eingeben: \n";

    int Wert;
    do
    {
        std::cout << "Wert (0 = Ende): ";
        std::cin >> Wert;
        if (Wert != 0)
            meineDaten.push_back(Wert); // Wert anhaengen
    } while (Wert != 0);
    std::cout << "Es wurden folgende Werte eingegeben: \n";
    for (int i = 0; i < meineDaten.size(); i++)
        std::cout << i << ". Wert: " 
                  << meineDaten[i] << std::endl;
}