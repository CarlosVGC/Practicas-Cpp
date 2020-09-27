# include <iostream>

int main()
{
    float a,b, op;

    std:: cout << "Ingresa el numero a "; std:: cin>> a; 
    std:: cout << "Ingresa el numero b "; std:: cin>> b;

    op = (a/b)+1;// expo, raiz, * , / +, -
    std:: cout.precision(4); // toma en cuenta el punto decimal 1.22
    std:: cout << "El resultado de la operacion es: " << op << "\n";

    system("pause");
    return 0;
}