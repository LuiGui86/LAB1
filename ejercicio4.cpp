# include <iostream>
# include <cstdlib>
/*
/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%
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
