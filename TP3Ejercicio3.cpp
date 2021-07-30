# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.*/

using namespace std;

int main () {
    int num;

cout<<"Ingrese un numero: \n";
cin>>num;

if (num%2==0){
    cout<<"El numero es par \n" ;

}

else {
    cout<<"El numero es impar \n" ;
}


}
