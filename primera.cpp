#include <iostream> //incluir la biblioteca estándar (STL) del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida

using namespace std; //para utilizar los comandos de la libreria standar sin escribir el nombre de la libreria cada vez que se utilice

void calculos(int num, int *doble, int *triple){ //crear una nueva funcion de tipo void porque no retorna ningun valor. La funcion se llama calculos y recibe como parametros un entero llamado num y dos punteros de tipo enteros, uno llamado doble y el otro llamado triple
    *doble=2*num; //el nuevo valor que se almacenara en el espacio de memoria al cual apunta el putero *doble es igual a multiplicar 2 por el valor recibido en el parametro num
    *triple=3*num; //el nuevo valor que se almacenara en el espacio de memoria al cual apunta el putero *triple es igual a multiplicar 3 por el valor recibido en el parametro num
    
    //los siguientes cout se utilizan para mostrar en consola los valores almacenados en las variable y punteros utilizados en la funcion calculos
    cout<<"Variables de la funcion \"Calculos\""<<endl;
    cout<<"num: "<<num<<endl;
    cout<<"*doble: "<<*doble<<endl;
    cout<<"*triple: "<<*triple<<endl;
    cout<<"doble: "<<doble<<endl;
    cout<<"triple: "<<triple<<endl;
}
int main() { //crear la funcion main
    int numero=2, doble=0, triple=0; //declarar e inicializar tres variables de tipo entero llamadas numero, doble y triple
    calculos(numero, &doble, &triple); //mandar a llamar la funcion calculos enviando como argumentos el valor almacenado en la variable local numero y la direccion de memoria de las variables locales doble y triple. El simbolo & indica que se esta enviando la direccion de memoria
    
    //los siguientes cout se utilizan para mostrar en consola los valores almacenados en las variable y punteros utilizados en la funcion main
    cout<<endl;
    cout<<"Variables de la funcion \"main\""<<endl;
    cout<<"numero: "<<numero<<endl;
    cout<<"doble: "<<doble<<endl;
    cout<<"triple: "<<triple<<endl;
    cout<<"&doble: "<<&doble<<endl;
    cout<<"&triple: "<<&triple<<endl;
    
    //los siguientes cout se utilizan para mostrar en consola los resultados
    cout<<endl;
    cout<<"El doble de 2 es "<< doble<<endl;
    cout<<"El triple de 2 es "<<triple<<endl;
    
    

    return 0;
}