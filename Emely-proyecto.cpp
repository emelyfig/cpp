
#include <iostream>
#include <conio.h>

using namespace std;                        

int main ()
{
	int i=1, partido=0, libre=0, nacional=0, liberal=0, pinu=0;
	float porcLibre=0, porcNacional=0, porcLiberal=0, porcPinu=0, totalPorc=0;
	const float totalPersonas=5;
	
	while(i <= totalPersonas)
	{
		cout<<"Seleccione a que partido politico esta a favor:"<<endl; 
		cout<<"1 = Libertad y Refundacion"<<endl;
		cout<<"2 = Nacional de Honduras"<<endl;
		cout<<"3 = Liberal de Honduras"<<endl;
		cout<<"4 = Partido Innovacion y Unidad"<<endl;
		cout << "----------------------------"<<endl;
		cout<<"       "; cin>>partido;
		cout<<"------------------------------"<<endl;
		
		if(partido == 1)
		{
			libre++;
		}
		if(partido == 2)
		{
			nacional++;
		}
		if(partido == 3)
		{
			liberal++;
		}
		if(partido == 4)
		{
			pinu++;
		}
				
		totalPorc++;
		
		i++;
	}
	porcLibre = libre / totalPorc * 100;
	porcNacional = nacional / totalPorc * 100;
	porcLiberal = liberal / totalPorc * 100;
	porcPinu= pinu / totalPorc * 100;
	
	cout<<" Partido Libertad y Refundacion a favor: "<<libre<<" con un porcentaje de: "<<porcLibre<<"%"<<endl;
	cout<<" Partido Nacional de Honduras a favor: "<<nacional<<" con un porcentaje de: "<<porcNacional<<"%"<<endl;
	cout<<" Partido Liberal de Honduras a favor: "<<liberal<<" con un porcentaje de: "<<porcLiberal<<"%"<<endl;
	cout<<" Partido innovacion y unidad a favor: "<<pinu<<" con un porcentaje de: "<<porcPinu<<"%"<<endl;
	
	return 0;	
}

