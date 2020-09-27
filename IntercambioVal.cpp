# include <iostream>

int main()
{
    float a,b,aux;

    std:: cout << "Valor para a: "; std:: cin >> a;
    std:: cout << "Valor para b: "; std:: cin >> b;
    std:: cout << "Valor a: "<< a << "\n";
    std:: cout << "Valor b: "<< b << "\n";
    
    aux = a;
    a = b;
    b = aux;

    std:: cout << "Valor despues a: "<< a <<"\n";
    std:: cout << "Valor despues b: "<< b <<"\n";

    system("pause");
    return 0;
}