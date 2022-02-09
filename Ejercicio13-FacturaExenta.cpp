
#include <iostream>  

/* run this program using the console pauser or add your own getch, system ("pause") or input loop */


using namespace std;

int main(int argc, char** argv)

{
	//Datos de entrada
	
	double subtotal = 0; 
	double total = 0; 
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento; 
	double calculoImpuesto = 0;
	char estaExenta = 0;
	
	cout << " Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	
	cout << " Ingrese el descuento (0, 10, 15 ,20): ";
	cin >> descuento;
	
	cout << " Su factura esta exenta? ingrese una S = si o N = no: ";
	cin >> estaExenta;
	
	//Proceso
	
	calculoDescuento = (subtotal * descuento) / 1000;
	
	if (estaExenta == 'S' || estaExenta == 's')
	{
		calculoImpuesto = 0;
	}
	
	else
	{
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	}
	
	
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	//Salida
	
	cout << endl;
	cout << "Total a pagar es: " << total;
	
	
	return 0;
	
}
