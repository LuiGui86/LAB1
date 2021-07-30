# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas días y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y
2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y
0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y
20 horas*/

 using namespace std;

 int main () {
     int horas, cantDias , cantHs;

    cout <<"Ingrese cantidad de horas: \n";
    cin >>horas;

    cantHs = horas%24;
    cantDias = (horas - cantHs)/24;



    cout <<"La cantidad de dias es: \n";
    cout <<cantDias;

    cout <<" \n La cantidad de horas es: \n";
    cout <<cantHs;

    return 0;
}
