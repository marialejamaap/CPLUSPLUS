// programa de Tipos de datos en c++
#include <iostream> // incluir libreria de datos de entrada y salida 

using namespace std;
int main(){
    int numero_entero= 24;// int ---> para variables tipo entero ---> numero_entero es el nombre de la variable
                          // en este caso guarda en la variable numero_entero el numero entero 24 (siempre finalizar en ;)
    float numero_flotante= 34.6;// float ---> para variables tipo flotantes o decimales ---> numero_flotante es el nombre de la variable
                          // en este caso guarda en la variable numero_flotante el numero con decimales 34.6 (siempre finalizar en ;)
    double num_double_flotante=34.9685044; // double---> para variables tipo flotantes pero con una capacidad de memoria mayor
                                            // así puede tener en la variable más cantidad de numeros 
    char caracter= 'g'; // char ---> para variables tipo caracter ---> solo guarda un caracter en la variable
                        // el caracter se debe ingresar con comillas simples, el caracter puede ser un numero, una letra,
                        // un signo, un espacio etc. Ver lista de caracteres en codigo ASCII**
                        
                        
    /* Acontinuación se muestran las variables que definimos anteriormente */   
    
 cout << " El numero entero es: " << numero_entero <<endl; // endl es decirle al programa que introduzca un fin de linea
                                                        // un espacio de línea despues de la salida
  cout << " El numero flotante es: " << numero_flotante <<endl;
   cout << " El numero double es: " << num_double_flotante <<endl;
    cout << " La variable tipo char es: " << caracter <<endl;
    
    return 0; // retorne un cero al programa principal ----> FIN del programa 
    }
