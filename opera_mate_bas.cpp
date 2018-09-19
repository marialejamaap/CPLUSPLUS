/* Ejercicio: Un programa que lea dos numeros y realiza la suma, la resta, 
la multiplicación y división entre ellos*/

#include <iostream>
using namespace std;
int main (){
     float numero_1, numero_2, suma=0,resta=0,multiplicacion=0,division;/*se definen las variables  
     como flotantes para que en el momento de realizar la division no pierda decimales*/
     cout<< "1. Ingrese numero: " ; //pide al usuario numero 1
     cin>> numero_1;
     cout<< endl << "2. Ingrese numero: " ; // pide al usuario numero 2
     cin>>numero_2;
     
     suma=numero_1+numero_2; // suma numero 1 y 2 con el operador (+)
     resta=numero_1-numero_2;// resta con el operador (-)
     multiplicacion=numero_1*numero_2;// multiplica con el operador (*)
     division= (numero_1/numero_2);// divide con el operador (/)
     cout<<"\nLa suma entre los dos numeros es: "<<suma; // muestra la suma
     cout<<"\nLa resta entre los dos numeros es: "<<resta; // muestra la resta 
     cout<<"\nLa multiplicacion entre los dos numeros es: "<<multiplicacion; // muestra la multiplicacion 
     cout<<"\nLa division entre los dos numeros es: "<<division; // muestra la division 
     
     
     
     return 0; //finaliza programa principal
    }
