# include <iostream>

int main()
{
    float n1, n2, suma, resta, div, mul;

    std:: cout << "Ingresa el primer numero";
    std:: cin >> n1;
    std:: cout << "Ingresa el segundo numero";
    std:: cin >> n2;
    
    suma = n1 + n2;
    resta = n1-n2;
    div = n1/n2;
    mul = n1*n2;

    std:: cout << "El resultado de la suma es: "<< suma <<"\n";
    std:: cout << "El resultado de la resta es: "<< resta <<"\n";
    std:: cout << "El resultado de la div es: "<< div <<"\n";
    std:: cout << "El resultado de la mul es: "<< mul <<"\n";

    system("pause");
    return 0;
}