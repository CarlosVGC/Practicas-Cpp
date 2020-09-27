# include <iostream>

int main()
{
    float a,b,c,d,e,f, res;
    std:: cout << "Ingrese el valor de la expresion (a+(b/c))/(d+(e/f))";
    std:: cout <<"a:"; std:: cin >> a;
    std:: cout <<"b:"; std:: cin >> b;
    std:: cout <<"c:"; std:: cin >> c;
    std:: cout <<"d:"; std:: cin >> d;
    std:: cout <<"e:"; std:: cin >> e;
    std:: cout <<"f:"; std:: cin >> f;

    res = (a+(b/c))/(d+(e/f));

    std:: cout.precision(4);
    std:: cout << "Resultado: "<< res << "\n";


    system("pause");
    return 0;
}