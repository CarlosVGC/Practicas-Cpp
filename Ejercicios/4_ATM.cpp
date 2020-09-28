//Codigo basico que simula el funcionamiento de un cajero
#include <iostream>

int main()
{
    float saldocajero = 10000, retiro, agregar, saldopersona= 3570;
    int opcion;
    repetir:
    std:: cout << "\nBienvenido ingresa la opción que desea realizar\n";
    std:: cout << "1)Consultar saldo\n";
    std:: cout << "2)Agregar saldo\n";
    std:: cout << "3)Retirar saldo\n";
    std:: cout << "4)Salir saldo\n";
    std:: cin >> opcion;

    switch (opcion)
    {
    case 1:
    std:: cout << "1)Usted escogio consulta saldo:\n";
    std:: cout << "\nSu saldo es: "<< saldopersona;
    goto repetir;
        break;
    
    case 2:
    std:: cout << "\n2)Usted escogio agregar saldo:\n Ingrese la cantidad a agregar: ";
    std:: cin >> agregar;
    saldopersona = saldopersona + agregar;
    saldocajero = saldocajero + agregar;
    goto repetir;
        break;

    case 3:
    std:: cout << "3)Usted escogio retirar saldo:\n Ingrese la cantidad a retirar: ";
    std:: cin >> retiro;
    if(retiro > saldopersona || retiro > saldocajero)
        std:: cout << "No se puede realizar la transaccion";
    else
    {
        saldopersona = saldopersona - retiro;
        saldocajero = saldocajero - retiro;
        std:: cout << "Su nuevo saldo es: "<< saldopersona;
    }
    goto repetir;
        break;

    case 4:
    std:: cout << "4)Usted escogio salir, que tenga un buen dia\n";
    goto repetir;
    system("pause");
    return 0;
        break;

    default:
    std:: cout << "Usted ha ingresado una opcion incorrecta\n";
        break;
    }

    system("pause");
    return 0;
}