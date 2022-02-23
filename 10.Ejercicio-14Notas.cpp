#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
  int nota = 0;

  cout << "INGRESE UNA NOTA ENTRE 0 Y 100: ";
  cin >> nota;

  if (nota >= 95 && nota <= 100) {
      cout << "OBTUVO UNA: A";
    } else {
    	
      if (nota >= 85 && nota <= 94) {
          cout << "OBTUVO UNA: B";
        } else {
        	
          if(nota >=75 && nota <= 94){
              cout << "OBTUVO UNA: C";
            }else {
            	
              if (nota >= 65 && nota <= 74) {
                  cout << "OBTUVO UNA: D";
                } else {
                	
                  if (nota >=60 && nota <= 64) {
                      cout << "OBTUVO UNA: E";
                    } else {
                    	
                      if (nota >=0 && nota <60) {
                          cout << "OBTUVO UNA: F";
                        } else {
                        	
                        }
                    }
                }
            }
        }
      
    }
 
  return 0;
}
