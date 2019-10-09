#include <iostream> 

using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int b[6]={1,2,3,4,5,6};
    double medianaA=0, medianaB=0;
    
    int sizea, sizeb;
    
    sizea=sizeof(a)/sizeof(a[0]);
    sizeb=sizeof(b)/sizeof(b[0]);
    
    if(sizea%2!=0){
        medianaA=a[(sizea-1)/2];
    }
    else{
        medianaA=(double)((a[(sizea-1)/2]+(a[((sizea-1)/2)+1])))/2;
    }
    
    if(sizeb%2!=0){
        medianaB=b[(sizeb-1)/2];
    }
    else{
        medianaB=(double)((b[(sizeb-1)/2]+(b[((sizeb-1)/2)+1])))/2;
    }
    
    cout<<"Mediana de a: "<<medianaA<<endl;
    cout<<"Mediana de b: "<<medianaB<<endl;
    
    return 0;
}