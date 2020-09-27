#include <iostream>

int main()
{
    int numing, numaencont = 5;

    std:: cout << "Ingresa un numero mayor al que tengo: "; std:: cin >> numing;
    if (numing >= numaencont) // == igual, != diferente
    {
        std:: cout << "Lo has encontrado";
    }
    else
    {
        std:: cout << "No lo has encontrado";
    }
    
    system("pause");
    return 0;
}