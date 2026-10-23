#include<iostream>
#include<vector>

int main()
{
    std::vector<float> Kosten(12); //Tabelle mit 2 Float werten angelegt

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


}