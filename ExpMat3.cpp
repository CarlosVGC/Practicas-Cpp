# include <iostream>
# include <math.h>

int main()
{
    float x,y,res;

    std:: cout << "Ingresa los valores para obtener el resultado \nx: "; std:: cin >> x;
    std:: cout << "Valor para y: "; std:: cin >> y;

    res = (sqrt(x))/((pow(y,2))-1);

    std:: cout << "El resultado es: "<< res << "\n";

    

    system("pause");
    return 0;
}