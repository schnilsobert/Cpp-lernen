#include<iostream>
#include<cmath>
int main()
{
    unsigned int die_null = 0;
    unsigned int n_groesste_int;
    std::cout << "Wie viele Bits stehen den ints zur Verfügung? " <<std::endl;
    n_groesste_int = ~die_null;
    std::cout << "das ist der Anfangswert: " << die_null << std::endl
              << "das die negierte Variante: " << n_groesste_int << std::endl
              << "negiert in Bits umgewandelt! " << log2(n_groesste_int) <<  " Bits!" << std::endl;
    unsigned long die_null_long = 0;
    unsigned long n_groesste_long;
    std::cout << "Wie viele steht einem Long zur Verfügung? " << std::endl;
    n_groesste_long = ~die_null_long;
    std::cout << "das ist der Anfangswert: " << die_null_long << std::endl
              << "das die negierte Variante: " << n_groesste_long << std::endl
              << "negiert in Bits umgewandelt! " 
              << log2(n_groesste_long) <<  " Bits!" << std::endl;

}