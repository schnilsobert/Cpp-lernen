#include<iostream>
#include<cmath>
// kurze erklaerung: drei zahlen eingaben und die groesste wird wieder ausgegeben
int validiere_zahl(std::string text);

int main()
{
    std::cout << "Im folgenden brauche ich drei ganze Zahlen von dir x, y und z :)";
    double x = validiere_zahl("\nGib eine ganze Zahl x an: ");
    int y = validiere_zahl("\nGib eine ganze Zahl y an: ");
    int z = validiere_zahl("\nGib eine ganze Zahl z an: ");

    if (x > y and x > z)
    {
        std::cout << x << " (x) Ist die Groesste Zahl!!!\n";
    }
    else if (y > x and y > z)
         {
            std::cout << y << " (y) Ist die Groesste Zahl!!!\n";
         }
         else if (z > x and z > y)
              {
                std::cout << z << " (z) Ist die groesste Zahl!!!\n";
              }
             else 
             {
                std::cout << x << std::endl
                          << y << std::endl
                          << z << std::endl
                          << "Sind alle Gleich ?!\n";
             }
    

   
}
int validiere_zahl(std::string text)
{
    double wert;
    while (true)
    {
        std::cout << text;
        std::cin >> wert;
        if (std::cin and wert == static_cast<int>(wert))
        {
            return static_cast<int>(wert);
        }
        else
        {
            std::cout << "keine Gleitkommezahlen oder Buchstaben eingeben!!";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}