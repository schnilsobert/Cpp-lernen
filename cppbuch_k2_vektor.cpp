#include<iostream>
#include<vector>

int main()
{
    //Tabelle mit 2 Float werten angelegt
    std::vector<float> Kosten(12); 
    // Füllen der Tabelle
        //type umformung von Int zu float
    for (int i=0; i < Kosten.size(); i++)
        Kosten[i] = static_cast<float>(150-i*i)/10.0;
        //Tabelle augeben
    for(int i = 0; i < Kosten.size(); i++)
        std::cout << i << ": " << Kosten[i] << std::endl;
        //Berechnung von Summe und Mittelwert der Tabelle
    float sum = 0.0;
    for( int i = 0; i < Kosten.size(); i++)
        sum += Kosten[i];
    std::cout << "Summe: " << sum << std::endl;
    std::cout << "Mittelwert: " << sum/Kosten.size() << std::endl;
        //Maximum berechnen
    float maxi = Kosten[0];
    for(int i = 0; i < Kosten.size(); i++)
        if (maxi < Kosten[i])
            maxi = Kosten[i];
    std::cout << "Maximum: " << maxi << std::endl;
    // zweite Tabelle sotierteKosten deklarieren, sotieren
    std::vector<float> sortierteKosten = Kosten;
    //aufsteigend sortieren
    for (int i = 0; i < Kosten.size(); i++)
        for (int j = 0; j < i; j++)
            if (sortierteKosten[i] < sortierteKosten[j])
                {
                    float temp = sortierteKosten[i];
                    sortierteKosten[i] = sortierteKosten[j];
                    sortierteKosten[j] = temp;
                }
        // sortiert ausgeben
    for (int i = 0; i < Kosten.size(); i++)
        std::cout << i << ": " << sortierteKosten[i] << std::endl;
}