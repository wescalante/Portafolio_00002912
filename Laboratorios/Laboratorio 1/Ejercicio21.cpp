#include <iostream>

using namespace std;

int main() {
    
    int mat[5][5]={0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    for (int i=0; i<5;i++){
        
        for (int j=0; j<i;j++){
            cout<<"Introduzca el valor de la fila "<<i+1<<" y columna "<<j+1<<": ";
            cin>>mat[i][j];
        }
        
    }
    
    cout<<endl<<endl;
    for (int i=0; i<5;i++){
        
        for (int j=0; j<5;j++){
            
            cout<<mat[i][j]<<"      ";
        }
        
        cout<<endl;
    }
    

    return 0;
}
