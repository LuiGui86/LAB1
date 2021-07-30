# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

    float impVenta;
    float porDescuento;
    float impTotal;

    cout <<"Ingrese el importe de la venta: \n";
    cin >> impVenta;
    cout <<"Ingrese el porcentaje de descuento total: \n";
    cin >> porDescuento;

    impTotal = impVenta -(impVenta*porDescuento/100);

    cout <<"El total a pagar es: \n";
    cout <<impTotal;

    return 0;

}
