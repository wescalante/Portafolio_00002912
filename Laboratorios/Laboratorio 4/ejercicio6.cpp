#include<iostream>

using namespace std;

struct TNodo {
    int dato;
    TNodo *siguiente;
};
typedef TNodo Nodo;
Nodo *pInicio;
Nodo *parInicio;
Nodo *imparInicio;

void insertarFinal(int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->siguiente = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->siguiente;
        }
        q->siguiente = nuevo;
    }
}

void insertarFinalPar(Nodo *&pIniciopar,int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->siguiente = NULL;

    if (parInicio == NULL) {
        parInicio = nuevo;
    } else {
        Nodo *p = parInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->siguiente;
        }
        q->siguiente = nuevo;
    }
}

void insertarFinalImpar(Nodo *&pInicioimpar,int num) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->siguiente = NULL;

    if (imparInicio == NULL) {
        imparInicio = nuevo;
    } else {
        Nodo *p = imparInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->siguiente;
        }
        q->siguiente = nuevo;
    }
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->siguiente;
    }
}

void mostrarListaPar() {
    Nodo *s = parInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->siguiente;
    }
}

void mostrarListaImpar() {
    Nodo *s = imparInicio;

    while (s != NULL) {
        cout << (s->dato) << endl;
        s = s->siguiente;
    }
}

void separarLista(Nodo *&pInicio, Nodo *&pIniciopar, Nodo *&pInicioimpar){
	int aux1, aux2;
	Nodo *s;
	while(pInicio!=NULL){
		s=pInicio;
		if(s->dato%2==0){
			aux1=s->dato;
			insertarFinalPar(pIniciopar,aux1);
		}else{
			aux2=s->dato;
			insertarFinalImpar(pInicioimpar,aux2);
		}
		pInicio=pInicio->siguiente;
		delete s;
	 }
}

int main() {
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    parInicio = NULL;
    imparInicio = NULL;
    int newnumber;

    bool continuar = true;
    do {
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Separar pares e impares"
                << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch (opcion) {
            case 1: cout << "Agregando..." << endl;
                cout << "Ingrese el numero a insertar en la lista: ";
                cin>>newnumber;
                insertarFinal(newnumber);
                break;
            case 2: cout << "Separando..." << endl;
                cout << "Lista original:" << endl;
                mostrarLista();
                separarLista(pInicio, parInicio,imparInicio);
                cout<<endl;
                cout<<"Lista de elementos pares:"<<endl;
                mostrarListaPar();
                cout<<endl;
                cout<<"Lista de elementos impares:"<<endl;
                mostrarListaImpar();
                break;
            case 3: continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
        //cout<<"pinicio"<<pInicio;
    } while (continuar);


    return 0;
}