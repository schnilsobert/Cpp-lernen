#include<iostream>
#include<complex> // der header fuer komplexe Zahlen
//beispiele fuer komplexe zahlen
// anstatt float sind auch double und long double moegl.

int main()
{
    std::complex<float> c1;
    std::complex<float> c2(1.2, 3.4);
    std::cout << c2 << std::endl;
    c1 += c2 + c1;
    c1 = c2 * 5.0f;

    float re = c1.real();
    std::cout << c1.imag() << std::endl;

    //Beispiele fuer Hilfsfunktionen
    std::complex<float> c3 (1.0, 2.0 );
    c1 = conj(c3);
    //Umrechnung in Polarkoordinaten
    const float pi = 4.0 * atan(1.0);
    float Betrag = 100.0,
          Phase = pi/4.0;
    c1 = std::polar(Betrag, Phase);
    // Umrechnung in Polarkoordinaten
    float rho = abs(c1);
    float theta = arg(c1);

    float L = norm(c1);

    std::cout << "Betrag  =" << Betrag <<std::endl;
    std::cout << "rho     =" << rho << std::endl;
    std::cout << "L       =" << L << std::endl;
    std::cout << "Norm    =" << Phase << std::endl;
    std::cout << "theta   =" << theta 
              << " = " << theta/pi * 180.  << " Grad" << std::endl;
    std::cout << "Komplexe Zahl eingeben. Erlaubte Formate (Beispiel): "
                 "\n (1.78, -98.2) \n (1.78) \n 1.78 \n jetzt du: ";
    std::cin >> c1;
    std::cout << "Komplexe Zahl = " << c1 << std::endl;

}
