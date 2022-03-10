#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Americano" << endl;
        cout << "2 - Latte" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Americano - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Latte - L 30.00", 1, 30);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Iced" << endl;
        cout << "2 - Limonada" << endl;
        cout << "3 - Granitas frutales" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Iced - L 60.00", 1, 60);
		} else if(opcionProducto == 2){
			agregarProducto("1 Limonadas - L 30.00", 1, 30);
		} else if(opcionProducto == 3){
			agregarProducto("1 Granitas frutales - L 20.00", 1, 20);
		} else {
			cout << "opcion no valida" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Alfajor" << endl;
        cout << "2 - Chocolate Dona" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Alfajor - L 20.00", 1, 20);
		} else if(opcionProducto == 2){
			agregarProducto("1 Chocolate Dona - L 25.00", 1, 25);
		} else {
			cout << "opcion no valida" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }        
    default:
        break;
    }
}
	
