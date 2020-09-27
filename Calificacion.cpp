# include <iostream>

int main()
{
    float prac, part, exam, cal;

    std:: cout << "Ingresa cal prac: "; std:: cin >> prac;
    std:: cout << "Ingresa cal part: "; std:: cin >> part;
    std:: cout << "Ingresa cal exam: "; std:: cin >> exam;

    cal = (prac*.4)+(part*.2)+(exam*.4);

    std:: cout << "Calificacion: " << cal << "\n";
    
    system("pause");
    return 0;
}