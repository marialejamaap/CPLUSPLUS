/* Imprime triangulo de la siguiente forma 

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 ********* */


#include <iostream>
#include <string>
using namespace std;

int main()
{
 int i,j,n=9;
 int aux=n;
 string sp="*";
 
 for (j=1;j<=aux;j++){
 for (i=1;i<=n;i++){
     cout<<" ";
     }
     cout<<sp;
cout<<endl;
 sp=sp+"*";
   n=n-1;

}
}
