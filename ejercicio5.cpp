# include <iostream>
# include <cstdlib>
/*
Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
*/
using namespace std;

int main () {

    float alfajorA, alfajorB, alfajorC,totalAlfajoresVendidos  ;

    std::cout<<"Ingresar total de alfajorA vendidos: ";
    std::cin>>alfajorA;
    std::cout<<"Ingresar total de alfajorB vendidos: ";
    std::cin>>alfajorB;
    std::cout<<"Ingresar total de alfajorC vendidos: ";
    std::cin>>alfajorC;

    totalAlfajoresVendidos = alfajorA + alfajorB + alfajorC;



    std::cout <<"La cantidad de alfajores vendidos es: " << totalAlfajoresVendidos<<endl;
    alfajorA = (alfajorA*100) / totalAlfajoresVendidos;
    std::cout<<"Cantidad de alfajorA vendidos :  "<<alfajorA<<"%"<<endl;
    alfajorB = (alfajorB*100) / totalAlfajoresVendidos;
    std::cout<<"Cantidad de alfajorB vendidos : "<<alfajorB<<"%"<<endl;
    alfajorC = (alfajorC*100) / totalAlfajoresVendidos;
    std::cout<<"Cantidad de alfajorC vendidos : "<<alfajorC<<"%"<<endl;


    return 0;



}
