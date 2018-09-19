/* Primer programa Hello World!*/
#include <iostream>//Incluir la libreria iostream (datos de entrada y salida)
using namespace std; // usar standard para evitar escribir std::cout o std::cin
int main()// funcion principal tipo entero 
{
    cout << "Hello world!"; // sino se utiliza el using namespace std se debe colocar ---> std::cout<<""; std::cout<<;
                            // para las salidas o para las entradas en c++ ejemplo ---->    std::cin>>;
                            // siempre finalizar cada instrucción en ---> ;
                            // cout ----> salida en c cin ----> entrada en c
                            
    return 0; // le indica a nuestro programa principal que ya finalizó, recordar que main es una función de tipo entero
    
}
