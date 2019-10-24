#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class ListaSimple{
private:
    nodo *pInicio;

public:
    ListaSimple(void);
    void insAntes_1(int, int);
    void insertarInicioLista(int);
    void mostrarLista(void);
    void mostrarListaRec(void);
    void mostrarListaRec(nodo *);
    void mostrarListaRecD(void);
    void mostrarListaRecD(nodo *);
    void insFinal(int);
    void buscarElemento(int dato);
    void eliminarNodo(int);
    void suma(int);

};


ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}

void ListaSimple::eliminarNodo(int dato)
{
    nodo *p = pInicio, *q = NULL;

    while(p != NULL && p->dato != dato){
        q = p;
        p = p->sig;
    }
    if(p != NULL){
        if(q != NULL){
            q->sig = p->sig;
        }
        else{
            pInicio->sig = p->sig;
            delete p;
        }
    }
    else{
        cout << "Dato a borrar NO existe" << endl;
    }
}

void ListaSimple::buscarElemento(int dato)
{
    nodo *s = pInicio;

    while(s != NULL && s->dato != dato)
        s = s->sig;
    if(s != NULL)
        cout << "El dato SI esta en la lista" << endl;
    else
        cout << "El dato NO esta en la lista" << endl;
}

void ListaSimple::insAntes_1(int dato, int datoRef) {
    nodo *nuevo, *p, *q;

    nuevo = new nodo;
    nuevo->dato = dato;

    p = pInicio;
    q = NULL;
    while (p != NULL && p->dato != datoRef) {
        q = p;
        p = p->sig;
    }
    if (q == NULL) {
        if (p == NULL) {
            cout << "Insertaste el primero" << endl;
            pInicio = nuevo;
            pInicio->sig = NULL;
        } else {
            cout << "Dato de referencia esta al principio" << endl;
            pInicio = nuevo;
            pInicio->sig = p;
        }
    } else {
        if (p == NULL) {
            cout << "Dato de referencia no encontrado" << endl;
            q->sig = nuevo;
            nuevo->sig = NULL;
        } else {
            cout << "Dato insertado a mitad de la lista" << endl;
            q->sig = nuevo;
            nuevo->sig = p;
        }
    }
}

void ListaSimple::insertarInicioLista(int dato) {
    nodo *nuevo;

    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::mostrarLista(void) {
    nodo *s = pInicio;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void ListaSimple::mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void ListaSimple::mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}

void ListaSimple::mostrarListaRecD(void) {
    mostrarListaRecD(pInicio);
}

void ListaSimple::mostrarListaRecD(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
        mostrarListaRecD(s->sig);
    }
}

void ListaSimple::insFinal(int dato) {
    nodo *p, *q;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void ListaSimple:: suma(int dato){
int pares=0, impares=0, acum=0;

if (dato %2==0){
    acum= dato+pares;
    pares= acum;
    acum=pares;
    cout<< "La suma de los numeros pares es: "<< acum<< endl;
}
else {
    impares= dato+ impares;
    cout<< "La suma de los numeros impares es: "<< impares<< endl;
}
}

int main(void)
{
    ListaSimple miLista;
    char resp;
    int dato, datoRef, datoBuscar;

    cout << "Desea meter un dato (s/n)? ";
    cin>> resp;
    while(resp == 's'){
        cout << "\nDigite el dato: ";
        cin >> dato;

        miLista.insAntes_1(dato, datoRef); //insertarInicioLista(dato);
        cout << "\nDesea meter un dato (s/n)?";
        cin>> resp;
    }

    cout << "\n\Mostrar lista iterativo (sentido directo):" << endl;
    miLista.mostrarLista();
    cout << "\n\Mostrar lista recursivo (sentido inverso):" << endl;
    miLista.mostrarListaRec();


    cout << "\n\Digite dato a buscar: ";
    cin >> datoBuscar;
    miLista.buscarElemento(datoBuscar);
    cout << "\n\Dato buscado: " << datoBuscar << endl;

    miLista.suma(dato);




    return 0;
}
