//Codes examples
// Fibonacci series 
#include <iostream>
#include <string>
using namespace std; 
int main()
{
  int a=0, b=1, sum;// sólo se utilizan variables de tipo entero 
  cout << a << endl << b << endl;
  while(sum<=2000) // escoger el rango que quiera 
  { sum=a+b; 
  cout << sum <<endl; // mostrar suma de a y b
  a=b; //colocar valor de b en a, quiere decir asignar número anterior total 
  b=sum; // colocar valor de sum en b luego de realizar operación se asigna valor a 'a'
                     
      }
}
