# include <iostream>
# include <cstdlib>
/*
/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avi�n y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n
y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%
*/
using namespace std;

int main () {

    float asientoDisponibles, asientosOcupados, ocupados, noOcupados, totalAsientos;

    std::cout<<"Ingresar total de asientos: ";
    std::cin>>totalAsientos;
    std::cout<<"Inresar cantidad de asientos disponibles: ";
    std::cin>>asientoDisponibles;
    std::cout<<"Inresar cantidad de asientos ocupados: ";
    std::cin>>asientosOcupados;

    ocupados= (asientosOcupados*100) / totalAsientos;
    noOcupados= (asientoDisponibles*100) / totalAsientos;

    std::cout<< "Total de asientos ocupados =" <<ocupados<<"\n";
    std::cout<< "Total de asientos disponibles=" <<noOcupados<<"\n";
     system("pause");
     return 0;



}
