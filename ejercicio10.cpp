# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas d�as y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y
2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y
0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y
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
