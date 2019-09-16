#include <iostream>

using namespace std;

double exponencial(int, int);
int main() {
    
    int x;
    cout<<"Introduzca un entero para calcular la funcion exponencial: ";
    cin>>x;
    
    cout<<"El resultado de e^"<<x<<" es: "<<exponencial(x, 0);
    
    return 0;
}

int factorial(int);
int potencia(int, int);
double exponencial(int x, int k){
    double exp;
    if(k==34){
        return 1;
    }
    else{
        exp=((double)potencia(x, k)/factorial(k))+exponencial(x, k+1);
    }
    
}

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1);
   return 1;
}

int potencia(int base, int exponente){
    if(exponente==0){
        return 1;
    }
    else{
        return base*potencia(base, exponente-1);
    }
}