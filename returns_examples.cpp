#include <iostream>
#include <utility>// para utilizar pair<first, second>
#include <string.h>

using namespace std;

void function_one(int a);// declaración primera función 
int function_two(int a);// declaración segunda función 
pair<string, int> function_three(const char*p,int x); // declaración tercera funcion
void function_four();// declaración cuarta función 


int main()
{
   cout<<"Examples de returns with functions"<<endl<<endl;

   function_one(2); // cuando el argumento de entrada es 2, la función no retorna nada
       function_one(1); // ya que es diferente de dos imprime a console el argumento de entrada
       int i = function_two(5); // si es mayor de 4 imprime el 4 
       i = function_two(i); // asigna el valor de 4 a la variable
       cout<< i << '\n'; // ya que es un argumento menor que 4 sin tomar este, retorna el 2 y se imprime en consola
       
       cout<< function_three("Hello", 7).second << '\n';
       // Recibe dos argumentos, un string y un entero 
       // y mediante la opción .first o .second se escoge el argumento
       // pair es una clase y first y second vienen a ser dos variables miembro
       // de esta, de tipo público
       function_four(); // imprime a consola funcion uno
       return 0;
} 

void function_one(int a){
    if(a==2)
        return;
    cout<<a<<"\n";
}
int function_two(int a){
    if (a>4)
        return 4;
    cout<<a<<endl;
    return 2;
}
pair<string, int> function_three(const char*p,int x)
{

    return{p,x};
}
void function_four(){
    return function_one(10);
}
