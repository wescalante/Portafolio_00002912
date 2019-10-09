/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: funda
 *
 * Created on 29 de agosto de 2019, 08:03 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int mult(int a, int b);
int main(int argc, char** argv) {
    
    int a, b;
    
    cout<<"Ingrese el primer numero a multiplicar: ";
    cin>>a;
    cout<<"Ingrese el segundo numero a multiplicar: ";
    cin>>b;
    
    cout<<endl<<"El producto es "<<mult(a,b);
    
    

    return 0;
}

int mult(int a, int b){
    int producto;
    
    if(b<=1){
        producto=a;
    }
    else{
        producto=a+mult(a,b-1);
        
    }
    
    return producto;
}