#include<iostream>
#include<cmath>
#include<complex>
//beispiel a * x * x + b * x + c 
// Formel: x1 = -p / 2 + sqrt(p * p / 4 - q) , x2 = -p / 2 - sqrt(p * p / 4 - q)
double validiere_zahl(std::string text);
int main()
{
    
    std::cout << "Quad. Gleichung: a* x * x + b * x + c = 0\n";
    std::cout << "Koeffizienten a, b, c eingeben: \n";
    double a = validiere_zahl("Gib eine Zahl fuer den Koeffizienten a ein: ");
    double b = validiere_zahl("Gib eine Zahl fuer den Koeffizienten b ein: ");
    double c = validiere_zahl("Gib eine Zahl fuer den Koeffizienten c ein: ");
    
    /*std::cout << "Quad. Gleichung: a* x * x + b * x + c = 0\n";
    std::cout << "Koeffizienten a, b, c eingeben: ";
    double a, b, c;
    std::cin >> a >> b >> c;
    b = b / a;
    c = c / a;*/
    double Diskriminante = b * b / 4 - c;

    std::cout << "Loesung: \n";
    if (Diskriminante >= 0)
    {
        double x1 = -b / 2 + sqrt(Diskriminante);
        double x2 = -b / 2 - sqrt(Diskriminante);
        std::cout << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;
    }
    else
    {
        /*double real = - p / 2;
        double imaginear = sqrt(-Diskriminante); 
        std::complex<double> x1(real, imaginear);
        std::complex<double> x2(real, -imaginear);
        */
        std::complex<double> x1(- b / 2, sqrt(-Diskriminante));
        std::complex<double> x2(- b / 2, -sqrt(-Diskriminante));
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
}
double validiere_zahl(std::string text) {
    double wert; 
    while (true) 
    {
        std::cout << text;
        std::cin >> wert;
        if (std::cin)
        {
            return wert;
        }
        else
        {
            std::cout << "kein Quatsch!!!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }
}