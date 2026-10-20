#include<iostream>
#include <cmath>
//Programm zum finden einer Primzahl, welche auf eine gegebene Zahl folgt
int main()
{
    std::cout << "Berechnung der ersten Primzahl, die >="
                 " der eingegeben Zahl ist\n";
    long z;
    do 
    {
        //Abfrage solange z ≤ 3 ist
        std::cout << "Zahl > 3 eingeben: ";
        std::cin >> z;
    }while (z<= 3);

    if (z % 2 == 0)
        ++z;

    bool gefunden = false;

    do
    {
       //limit -> Grenze bis zu welcher gerechent wird
       long limit = 1+( sqrt(double(z)));

       long rest, teiler = 1;
       //z wird jetzt im kommenden durch alle ungeraden im limit liegenden Teiler gerechnent 
       do
       {
        teiler += 2;
        rest = z % teiler;
       } while (rest > 0 && teiler < limit);
       if (rest > 0 && teiler >= limit)
          gefunden = true;
       else z += 2;
       
    } while (!gefunden);
    std::cout << "Die naechste Primzahl ist " << z << std::endl;
}