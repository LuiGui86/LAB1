# include <iostream>
# include <cstdlib>


/* Hacer un programa que solicite por teclado que se ingresen dos n�meros y luego
guardarlos en dos variables distintas. A continuaci�n se deben intercambiar mutuamente los
valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
 */
using namespace std;

int main () {
    float a,b,aux;
    std:: cout << "Porfavor, ingrese dos numeros :" <<endl;
    std:: cin >> a;
    std:: cin >> b;
    std:: cout << "Los numeros ingresados son :" << a << " y " << b <<endl;
    aux=a;
    a=b;
    b=aux;
    std:: cout << "Sus valores invertidos son :" << a << " y " << b;
    return 0;

}
