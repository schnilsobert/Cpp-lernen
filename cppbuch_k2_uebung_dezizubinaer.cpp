#include<iostream>
#include<cmath>
#include<list>
 //beliebige Dezimalzahl in binaer

 int main()
 {
    std::cout << "Eine natürliche Zahl in dezimalschreibweise bitte: ";
    int x;
    std::cin >> x;
    if (x==0) {
      std::cout << "0\n";
    if (x < 0){
      std::cout << "Bitte nur Positive Zahlen!";
    }
    }
   /*  liste wo binaer zahlen von hiten zugefügt werden std::list<int>
    while (x != 0){
      if x % 2 == 0 
         append (liste.push_back()) 0
         x /= 2
         continue
      else 
         append 1 
         x--
         x / 2
   }
   */
  // Zweite methode subtraktionsmethode
   int y = static_cast<int>(std::log2(x));
   while (y>=0){
      // x -= std::pow(2.0, y); 
      // y--;
      // std::cout << "1";
      if (x >= std::pow(2.0, y)){
         x -= static_cast<int>(std::pow(2.0, y));
         std::cout << "1";
      } 
      else{
         std::cout << "0";
      }
      y--;
   }
  std::cout << std::endl;
 }