# include <iostream>

int main()
{
    int numero;
    regresar:
    std:: cout << "Ingresa un numero 1-3 o 4 salir:\n";
    std:: cin >> numero;
    switch (numero)
    {
    case 1:
    std:: cout << "Ingresaste el numero 1\n";
    goto regresar;
        break;

    case 2:
    std:: cout << "Ingresaste el numero 2\n";
    goto regresar;
        break;

    case 3:
    std:: cout << "Ingresaste el numero 3\n";
    goto regresar;
        break;

    case 4:
    std:: cout << "Adios\n";
    system("pause");
    return 0;
        break;
    
    default:
    std:: cout << "Opcion incorrecta\n";
    goto regresar;
        break;
    }

    system("pause");
    return 0;
}