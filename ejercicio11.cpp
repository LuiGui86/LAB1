# include <iostream>
# include <cstdlib>
/*) Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y
mostrar por pantalla a cuantos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1
día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0
día, 6 horas y 0 minutos.*/
 using namespace std;

 int main () {

    int minutos, cantDias , cantHs, cantMin;

    cout <<"Ingrese cantidad de minutos: \n";
    cin >>minutos;
    cantMin = minutos%60;

    cantHs = ((minutos - cantMin)/60)%24;

    cantDias = (((minutos - cantMin)/60) - cantHs)/24;

    cout <<"La cantidad de dias es: \n";
    cout <<cantDias;

    cout <<" \n La cantidad de horas es: \n";
    cout <<cantHs;

    cout <<" \n La cantidad de minutos es: \n";
    cout <<cantMin;

    return 0;


}
