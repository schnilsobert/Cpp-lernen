#include<iostream>
#include<cmath>
#include<complex>

//Beispiel quad. Gleichung: x * x + p * x + q = 0
// Formel: x1 = -p / 2 + sqrt(p * p / 4 - q) , x2 = -p / 2 - sqrt(p * p / 4 - q)
int main()
{
    std::cout << "Quad. Gleichung: x * x + p * x + q = 0\n";
    std::cout << "Koeffizienten p, q eingeben: ";
    double p, q;
    std::cin >> p >> q;
    double Diskriminante = p * p / 4 - q;

    std::cout << "Loesung: \n";
    if (Diskriminante >= 0)
    {
        double x1 = -p / 2 + sqrt(Diskriminante);
        double x2 = -p / 2 - sqrt(Diskriminante);
        std::cout << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;

    }
    else
    {
        double real = - p / 2, 
               imaginear = sqrt(-Diskriminante);
        std::cout << "x1 = " << real << " + " << imaginear << "i\n";
        std::cout << "x2 = " << real << " - " << imaginear << "i\n";
    }

}