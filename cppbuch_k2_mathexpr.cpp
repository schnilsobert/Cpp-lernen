#include<iostream>
#include<cmath>
 int main()
 {
    float x;
    std::cout << "x eingeben: ";
    std::cin >> x;
    std::cout << "x       = " << x << std::endl;
    std::cout << "fabs(x) = " << fabs(x) << std::endl;
    std::cout << "sqrt(x) = " << sqrt(x) << std::endl;
    std::cout << "sin(x)  = " << sin(x) << std::endl; //x hier im Bogenmaß
    std::cout << "exp(x)  = " << exp(x) << std::endl;
    std::cout << "log(x)  = " << log(x) << std::endl;  
 }