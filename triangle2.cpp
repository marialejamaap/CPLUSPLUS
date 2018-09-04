/* Triangulo muestra la siguiente imagen 

*********
 ********
  *******
   ******
    *****
     ****
      ***
       **
        *  */
#include <iostream>
#include <string>
using namespace std;

int main()
{
int i,j,n=9,aux;
string sp="";
aux=n;
for (j=1;j<=aux;j++){
for (i=1;i<=n;i++)
{ cout<<"*";
    } cout<<endl;
    sp=sp+" ";
    cout<<sp;
    n=n-1;}
}
