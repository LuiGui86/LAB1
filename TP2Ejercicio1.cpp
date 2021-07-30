# include <iostream>
# include <cstdlib>

/*hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/

 using namespace std;

int main () {
 int val;
 cout<<"Ingresar un numero: " <<endl;
 cin>>val;

if (val==0) {
    cout<<"El numero es cero"<<endl;
}
else if (val>0){
    cout<<"El numero es positivo"<<endl;
}
else
{
    cout<<"El numero es negativo"<<endl;
}

return 0;
}
