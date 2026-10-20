#include<iostream>
#include<cmath>

int main()
{
    unsigned int x, y;
    std::cout << "2 Zahlen > 0 eingeben: ";
    std::cin >> x >> y;
    std::cout << "Der GGT von " << x << " und " << y << " ist ";
    while (x != y)
        if (x > y) x-=y; //if...else zaehlt als eine Anweisung
        else       y-=x; //dehalb eingerueckt und ohne {} moegl.
    std::cout << x << std::endl;

}