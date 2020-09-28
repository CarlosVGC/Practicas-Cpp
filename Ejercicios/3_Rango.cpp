//Programa que determina que en que etapa de la vida se encuentra una persona

# include <iostream>

int main()
{
    int edad;
    ingresodato:
    std:: cout<< "Ingresa la edad de la persona: ";
    std:: cin >> edad;
    
    if(edad<= 0 || edad > 120)
    {
        std:: cout << "Su edad no es valida\n";
    }

    if(edad >= 1 && edad <= 17)
        std:: cout << "Usted es un niño\n";
    
    else if(edad >= 18 && edad <= 65)
        std:: cout<< "Usted es una Persona Adulta\n";
    else
        std:: cout<< "Usted es una Persona Adulta Mayor\n";

    goto ingresodato;
    
    system("pause");
    return 0;
}