//Primer programa de ejemplo (comentario de una linea)

/* Comentarios de 
multiples lineas
es util
*/

/*
Libreria iostream
funcion main funcion que 
cout Va a sacar algo
cin comput input 
return 0
*/

# include <iostream>

int main()
{
    std:: cout << "Hola mundo"; // muestra un texto 
    std:: cout << "\nEsto es otra linea de texto";
    std:: cin.get(); // recibe un teclazo para finalizar el programa

    /*variasbles
    Entero = 2,147, 843, 648
    Flotante 1.17549e
    double 2.22507e-308 
    char = 127 a -128
    bool
    */
   int entero = 10;
   float flotante = 9.99;
   double doble = 9.9999999;
   char caracter = 'c';
   bool condicion = 1;

   std:: cout << entero;
   std:: cout << "\n";
   std:: cout << flotante;
   std:: cout << "\n";
   std:: cout << caracter;
   std:: cin.get();




    return 0; // retorna nada
}


































