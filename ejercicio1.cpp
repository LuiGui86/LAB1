# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda.*/

using namespace std;

int main () {
    float horasTrabajadas, valorHora, sueldo;
     std::cout<<"Inresar cantidad de horas trabajadas: ";
     std::cin>>horasTrabajadas;
     std::cout<<"Valor por hora trabajada: ";
     std::cin>>valorHora;
     sueldo=horasTrabajadas*valorHora;
     std::cout<<"Sueldo a pagar="<<sueldo<<"\n";
     system("pause");
     return 0;


}
