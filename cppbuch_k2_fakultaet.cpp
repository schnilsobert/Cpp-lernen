#include<iostream>

int main()
{
    std::cout << "Fakultaet berechnen, Zahl >= 0? : ";
    int n;
    std::cin >> n;
    unsigned long fak = 1;
    int i; // ausserhalb der schleife deklariert
    for (i = 1; i <= n; i++)
        fak *= i;
    std::cout << n << "! = " << fak << std::endl;
}