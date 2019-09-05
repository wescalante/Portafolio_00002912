#include <iostream>
using namespace std;

int buscar(int, int, int);
int a[8]={1,3,4,5,17,18,31,33};
int main() {
    
    int low=0, high=7;
    
    int b;
    cout<<"Ingrese el numero a buscar: ";
    cin>>b;
    
    if(buscar(b, low, high)==-1){
        cout<<"El numero no fue encontrado";
    }
    else{
        cout<<"El numero no fue encontrado en la posicion "<<buscar(b, low, high);
    }
    
}

int buscar(int b, int low, int high){
    if(low>high){
     return (-1);   
    }
    int mid;
    mid=(low+high)/2;
    if(b==a[mid]){
     return (mid);   
    }
     if(b<a[mid]){
     buscar(b, low, mid-1);   
    }
    else{
    buscar(b, mid+1, high);
    
    
    }
    
}