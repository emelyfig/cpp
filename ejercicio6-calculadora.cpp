
/* Nombre: Emely Gissel Figueroa Cortes
   Fecha: 1/2/2022  
 
   Proposíto: Crear un programa que sume, reste, multiplique y divida.
*/   

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int a=0, b=0, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"ingrese el valor de  un entero:";
	cin>>a;
	cout<<"ingrese el valor de  otro entero:";
	cin>>b;
	
	suma= a+b;
	resta= a-b;
	multiplicacion= a*b;
	division= a/b;
	
	cout<<"El valor de la suma es: "<<suma<<endl;
	cout<<"El valor de la resta es: "<<resta<<endl;
	cout<<"El valor de la la multiploicacion es: "<<multiplicacion<<endl;
	cout<<"El valor de la division es: "<<division<<endl;
	
	
	return 0;
	
}


