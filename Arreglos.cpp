# include <iostream>

int main()
{
    char sexo[10];
    int edad;
    float estatura;

    std:: cout << "Ingresa lo siguiente:\n"; 
    std:: cout << "Sexo";
    std:: cin >> sexo;

    std:: cout << "edad";
    std:: cin >> edad;

    std:: cout << "estatura";
    std:: cin >> estatura;

    std:: cout << "Los datos son: \n";
    std:: cout << "Sexo: " << sexo << "\n";
    std:: cout << "Edad: " << edad << "\n";
    std:: cout << "Estatura: " << estatura << "\n";




    system("pause");
    return 0;

}