# include <iostream>

int main()
{
    int num1, num2;
    std:: cout << "Ingresa el numero 1\n"; std:: cin >> num1;
    std:: cout << "Ingresa el numero 2\n"; std:: cin >> num2;

    if(num1 == num2)
    {
        std::cout << "Los numeros son iguales";
    }
    else if (num1 > num2)
    {
        std::cout << "El numero 1 es mayor";
    }
    else
    {
        std::cout << "El numero 2 es mayor";
    }

    system("pause");
    return 0;
}