#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;



int main()
{
    while (true)
    {
        cout<<"------ J U E G O    D E    L O S    D A D O S ------"<<endl <<endl  <<endl;
        
		cout<<"- Usted  G A N A  Con Los Numeros  #4,  #6,  #8 -"<<endl  <<endl;
        cout<<"- Usted  P I E R D E  Con Los Numeros #2, #10, #12 -"<<endl <<endl <<endl  <<endl;
        
        cout<<"PRESIONE UNA TECLA PARA LANZAR LOS DADOS: "<<endl <<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
            
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
        cout<<"LA SUMA DE LOS DADOS ES: ["<< dado1 + dado2 << "]"<<endl <<endl;
        if (dado1+dado2 == 4 or dado1+dado2 == 6 or dado1+dado2 == 8)
        {
            cout<<"USTED GANA / PIERDE EL OPONENTE"<<endl <<endl;
            break;
            
        }
        if (dado1+dado2 == 2 or dado1+dado2 == 10 or dado1+dado2 == 12)
        {
            cout<<"GANA EL OPONENTE / USTED PIERDE"<<endl <<endl;
            break;
            
            
        }
        cout<<"LANZA NUEVAMENTE"<<endl <<endl;
        system("pause");
        system ("cls");
    }   
}

