#include <iostream>
#include <string>
using namespace std;

struct TPersona{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    string telefono;
    string correo;
};
typedef struct TPersona Persona;

Persona solicitarPersona(){
    Persona p;
    
   
    cout << "Carnet: "; cin >> p.carnet;
    cin.ignore();//Limpiando el buffer
    cout << "Nombre: "; getline(cin, p.nombre);
    cout << "Apellido: "; getline(cin, p.apellido);
    cout << "Edad: "; cin >> p.edad;
    cout << "Telefono: "; cin >> p.telefono;
    cout << "Correo: "; cin >> p.correo;
    
      
    
    return p;
}

void mostrarPersona(Persona p){
    cout << "Carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Telefono: " << p.telefono << endl;
    cout << "Correo: " << p.correo << endl;
     cout << endl;
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
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

void insertarDespuesDe(Persona p) {
    int unCarnet = 0;
    cout << "Carnet de la persona de referencia: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio;
    
    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    if(s == NULL){
        cout << "Persona de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;
    
    s->sig = nuevo;
    cout << "Persona insertada con exito" << endl;
}

void insertarAntesDe(Persona p) {
    int unCarnet= 0;
    cout << "Carnet de persona de referencia: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio, *q = NULL;
    
    while(s != NULL && (s->dato).carnet != unCarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "Persona de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
    
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Persona insertada con exito" << endl;
}

void agregarPersona(){
    Persona p = solicitarPersona();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPersona(s->dato);
        s = s->sig;
    }
}

void eliminarPersona(){
    int unCarnet = 0;
    cout << "Carnet de la persona a eliminar: ";
    cin >> unCarnet;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Persona a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona borrada!" << endl;
}

bool buscarPersona() {
    int unCarnet = 0;
    cout << "Carnet de la persona a buscar: ";
    cin >> unCarnet;
    
    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    

    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Ver Personas"
            << "\n\t3) Eliminar Persona\n\t4) Buscar Persona"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPersona();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                eliminarPersona();
            break;
            case 4: cout << "Buscando..." << endl;
                if(buscarPersona())
                    cout << "La persona SI se encuentra" << endl;
                else
                    cout << "La persona NO se encuentra" << endl;
                
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}