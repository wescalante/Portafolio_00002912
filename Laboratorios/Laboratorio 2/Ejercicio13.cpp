#include <iostream>

using namespace std;

int func(int);
int funciterativa(int);
int main(){
    
    int num;
    cout<<"Ingrese un entero: ";
    cin>>num;
    cout<<endl<<"resultado recursivo: "<<func(num);
    
     cout<<endl<<"resultado iterativo: "<<funciterativa(num);


return 0;
}


int func(int n){
if(n==0)
return(0);
return(n + func(n-1));
}

int funciterativa(int n){
    int sum;
    sum=n;
    for(int i=n-1;i>0;i--){
        sum+=i;
        
    }
    
    return sum;
    
    
}