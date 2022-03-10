#include <iostream>

using namespace std;

double subtotal, subImpuesto, total;
const double impuesto = .15;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    subImpuesto = subtotal * impuesto;
    total = subtotal + subImpuesto;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto 15%: " << subImpuesto << endl;
    cout << "Total: " << total << endl;
    
    system("pause");
}
