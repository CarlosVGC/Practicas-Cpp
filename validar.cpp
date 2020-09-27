# include <iostream>
# include <math.h>

int main()
{
    float x, y, res, ycuadrada;
    std:: cout << "Ingresa la el valor para:\n";
    std:: cout << "x: "; std:: cin >> x;
    ingresaydenuevo:
    std:: cout << "y: "; std:: cin >> y;
    ycuadrada=(pow(y,2)-1);
    
    if (ycuadrada <= 0)
    {
        std:: cout << "No se puede realizar esa operacion\n";
        std:: cout << "El resultado no es correcto, intentalo de nuevo";
        goto ingresaydenuevo;
    }
    res = (sqrt(x))/ ycuadrada;
    std:: cout << "El resultado es: " << res;

    system("pause");
    return 0;
}