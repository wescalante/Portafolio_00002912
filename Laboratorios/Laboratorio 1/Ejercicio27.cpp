#include <iostream>
#include <string>

using namespace std;


struct complejo{
    int parteR;
    int parteI;
};

string multiplicacion(int, int, int, int);
int main() {
    
    complejo c1, c2;
    cout<<"Ingrese la parte real del primer numero complejo (incluir signo): ";
    cin>>c1.parteR;
    
    cout<<"Ingrese la parte imaginaria del primer numero complejo (incluir signo): ";
    cin>>c1.parteI;
    
    cout<<"Ingrese la parte real del segundo numero complejo: ";
    cin>>c2.parteR;
    
    cout<<"Ingrese la parte imaginaria del segundo numero complejo: ";
    cin>>c2.parteI;

    cout<<"El resultado de la multiplicacion es: "<<multiplicacion(c1.parteR, c1.parteI, c2.parteR, c2.parteI);
    return 0;
}

string multiplicacion(int c1pr, int c1pi, int c2pr, int c2pi){
    
    string result;
    
    result=to_string((c1pr*c2pr-c1pi*c2pi))+" + " + to_string((c1pr*c2pi+c2pr*c1pi))+"i";
    
    return result;
}