

#include <iostream>

using namespace std;

int main(int argc, char const*argv[])
{
    // Variables
    
    int pares = 0, impares = 0, total = 0;
    
    // Pares
    
    for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 0)
		{
            pares = pares + i;
        }
        cout << i << "  ";
    }
    
    // Impares
    
    for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 1)
		{
            impares = impares + i;
        }
        cout << i << "  ";
    }
    
    // Suma de pares e impares
    
    total = pares + impares;

    cout << endl;
    
    // Datos de salida
    
    cout << "\n Total Pares: " << pares;
    cout << "\n Total Impares: " << impares;
    cout << "\n Total suma de pares e impares: " << total;
    
    
    return 0;
}
