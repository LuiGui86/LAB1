# include <iostream>
# include <cstdlib>

/*Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla
con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.*/

using namespace std;

int main () {
int a, b, c;
cout<<"Ingresa el primer numero:" <<endl;
cin>>a;
cout<<"Ingresa el segundo numero:" <<endl;
cin>>b;
c=b%a;
if (c==0){
cout<<"El primer numero es multiplo del segundo";
  }
else {     cout<<"No es multiplo" <<endl;
 }




}
