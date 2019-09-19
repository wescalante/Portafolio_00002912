#include <iostream>
#include <string>

using namespace std;

struct Tpila{
    int elements[100];
    int top;
        
    };
    typedef struct Tpila Pila;

void initialize(Pila *s){
 s->top=-1;   
}

bool empty(Pila *s){
 return s->top<0;   
}

void push(Pila *s, int e){
 if(s->top<99){
  (s->top)++;
  s->elements[s->top]=e;
 }
}

void pop(Pila *s, int *e){
 if(s->top>=0){
  *e=s->elements[s->top];
  (s->top)--;
 }
}

int ultimoValor(Pila *);
int ultimoValorIntacta(Pila *);

int main()
{
    Pila unaPila;
    initialize(&unaPila);
    

    push(&unaPila, 75);
    push(&unaPila, 2);
    push(&unaPila, 3);
    push(&unaPila, 4);
    push(&unaPila, 5);
    
    
    cout<<"Ultimo valor con pila intacta: "<<ultimoValorIntacta(&unaPila)<<endl;
    
   cout<<"Ultimo valor con pila vacia: "<<ultimoValor(&unaPila);
    
}

int ultimoValor(Pila *q){
    int lastvalue;
 while(empty(q)==false){
     pop(q, &lastvalue);
 }
 return lastvalue;
}


int ultimoValorIntacta(Pila *q){
    int lastvalue, valuetemp;
    Pila unaPilaTemp;
    initialize(&unaPilaTemp);
 while(empty(q)==false){
     pop(q, &lastvalue);
     push(&unaPilaTemp, lastvalue);
 }
 
 while(empty(&unaPilaTemp)==false){
     pop(&unaPilaTemp, &valuetemp);
     push(q, valuetemp);
 }
 
 return lastvalue;
}