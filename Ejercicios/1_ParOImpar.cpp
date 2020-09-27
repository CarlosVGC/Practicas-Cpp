//Programa que determina si un número entero es par o impar
# include <iostream>

int main()
{
    int num;
    std:: cout << "Ingresa el numero: ";
    std:: cin >> num;

    if(num % 2 == 0)
    {
        std:: cout << "El numero es par ";
    }
    else
    {
        std:: cout << "El numero es impar ";
    }
    system("pause");
    return 0;
}