# include <iostream>
# include <cstdlib>

/*Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.
Ejemplo 1. Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja y 3 sueltos, es decir $ 100 + $ 12 x 3 = $ 136.
Ejemplo 2. Si la cantidad ingresada son 28 huevos el programa calculará 2 cajas y 4 sueltos, es decir $ 100 x 2 + $12 x 4 = $ 248.
Ejemplo 3.Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas y 8 sueltos, es decir $ 12 x 8 = $ 96.*/

using namespace std;

int main () {

    int unidades, caja, huevoSuelto, totalHuevos;
    cout<<"Ingresa la cantidad de huevos:" <<endl;
    cin>>unidades;
    caja=(unidades/12)%12;
    huevoSuelto=unidades%12;
    cout<<"La cantidad de cajas es:" <<caja <<endl;
    cout<<"La cantidad de huevos sueltos es:" <<huevoSuelto <<endl;

    totalHuevos=(caja*100)+(huevoSuelto*12);
    cout<<"El importe a pagar es de :" <<totalHuevos <<endl;

    return 0;


}
