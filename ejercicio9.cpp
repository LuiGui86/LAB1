# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por
pantalla a cuantas horas y minutos equivalen.
Ejemplo 1: si se ingresan 380 minutos el programa mostrar� por pantalla que equivalen a 6
horas y 20 minutos.
Ejemplo 2: si se ingresan 720 minutos el programa mostrar� por pantalla que equivalen a 12
horas y 0 minutos.
Ejemplo 3: si se ingresan 50 minutos el programa mostrar� por pantalla que equivalen a 0
horas y 50 minutos*/

 using namespace std;

 int main () {
    int minutos, cantHs, cantMin;
    cout<<"Ingresar cantidad de minutos:" <<endl;
    cin>>minutos;

    cantMin=minutos%60;
    cantHs=(minutos-cantMin)/60;
    cout<<"Equivale a:" <<cantHs <<"hs" <<endl;
    cout<<"Equivale a:" <<cantMin <<"min" <<endl;
    return 0;

}
