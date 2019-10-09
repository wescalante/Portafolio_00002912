#include <iostream>
#include <stack>

using namespace std;

int ultimoValor();
int ultimoValorIntacta();
stack<int> s;
int main()
{
    
    
    
    s.push(72);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(75);
    

    cout<<"Ultimo valor con pila intacta: "<<ultimoValorIntacta()<<endl;
    
  cout<<"Ultimo valor con pila vacia: "<<ultimoValor();
    
    
   
    
}


int ultimoValor(){
    int lastvalue;
 while((s.empty())==false){
     lastvalue=s.top();
     s.pop();
 }
 return lastvalue;
}

int ultimoValorIntacta(){
    int lastvalue, valuetemp;
    stack<int> unaPilaTemp;
    
 while((s.empty())==false){
     lastvalue=s.top();
     unaPilaTemp.push(lastvalue);
     s.pop();
     
 }
 
 while((unaPilaTemp.empty())==false){
     valuetemp=unaPilaTemp.top();
     s.push(valuetemp);
     unaPilaTemp.pop();
     
 }
 
 return lastvalue;
}