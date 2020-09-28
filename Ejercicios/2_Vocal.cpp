//Programa que dice si un caracter es vocal o no
// "" comillas dobles es String
// '' comillas simples es un caracter

# include <iostream>

int main()
{
    char caracter;
    ingreso:
    std:: cout << "Ingresa un caracter: ";
    std:: cin >> caracter;

    switch(caracter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std:: cout << "El caracter ingresado es una vocal\n";
            goto ingreso;
            break;

        default:
            std:: cout<< "Esa letra no es una vocal\n";
            goto ingreso;
            break;
    }

    system("pause");
    return 0;
}