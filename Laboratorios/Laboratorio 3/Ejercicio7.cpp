#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarNumero(){
    int num = 0;
    cout << "Numero: ";
    cin >> num;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(num);
                continuar = false;
            break;
            case 2: insertarFinal(num);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->sig;
    }
}

void eliminarNumero() {
    int elim;
    cout << "\t1) Ingrese el numero a eliminar: ";
    cin>>elim;
    


            bool cont = true;
            while (cont) {
                Nodo *p = pInicio, *q = NULL;

                while (p != NULL && p->dato != elim) {
                    q = p;
                    p = p->sig;
                }
                if (p == NULL) {
                    cout << "Numero no encontrado" << endl;
                    cont = false;
                    return;
                }
                if (q == NULL)
                    pInicio = p->sig;
                else
                    q->sig = p->sig;
                delete(p);
                cout << "Numero borrado!" << endl;

            }
           



}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do {
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar numero\n\t2) Ver lista"
                << "\n\t3) Eliminar numero\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch (opcion) {
            case 1: cout << "Agregando..." << endl;
                agregarNumero();
                break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
                break;
            case 3: cout << "Seleccione..." << endl;

                eliminarNumero();
                break;
            case 4: continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    } while (continuar);

    return 0;
}