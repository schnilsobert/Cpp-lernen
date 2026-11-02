#include<iostream>

// Das programm ist nur dafuer da um Rekursion in Funktionen zu zeigen...
int qsum(long z) //übergabe per Wert
{
    if(z) //wahr (nicht Null)
    {
        int letzteZiffer = z % 10;
        return letzteZiffer + qsum(z/10);
    }
    else return 0;
}
/* iterative Variante:
int qsum(long z)
{
    int sum=0;
    while(z>0)
    {
        sum += z % 10;
        z = z / 10;
    }
        return sum;
}
*/
int main()
{
    std::cout << "Zahl: ";
    long zahl;
    std::cin >> zahl;
    std::cout << "Quersumme = " << qsum(zahl);
} 