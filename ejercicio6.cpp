# include <iostream>
# include <cstdlib>
/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
using namespace std;

int main () {
    float semana1, semana2, semana3, semana4, totalRecaudado, promedio$;

    std::cout<<"Ingresar recaudacion primera semana: "<<"$";
    std::cin>>semana1;
    std::cout<<"Ingresar recaudacion segunda semana: "<<"$";
    std::cin>>semana2;
    std::cout<<"Ingresar recaudacion tercer semana: "<<"$";
    std::cin>>semana3;
    std::cout<<"Ingresar recaudacion cuarta semana: "<<"$";
    std::cin>>semana4;

    totalRecaudado = semana1+semana2+semana3+semana4;
    promedio$ = (semana1+semana2+semana3+semana4) / 4;


    std::cout <<"Total recaudacion del mes: "<<"$" << totalRecaudado<<endl;

    std::cout <<"El promedio por semana en pesos es: "<<"$" << promedio$<<endl;

    semana1 = (semana1*100)/ totalRecaudado;
    std::cout <<"Porcentaje recaudado en la primera semana es: " << semana1<<"%"<<endl;
    semana2 = (semana2*100)/ totalRecaudado;
    std::cout <<"Porcentaje recaudado en la segunda semana es: " << semana2<<"%"<<endl;
    semana3 = (semana3*100)/ totalRecaudado;
    std::cout <<"Porcentaje recaudado en la tercera semana es: " << semana3<<"%"<<endl;
    semana4 = (semana4*100)/ totalRecaudado;
    std::cout <<"Porcentaje recaudado en la cuarta semana es: "  << semana4<<"%"<<endl;

    return 0;


}
