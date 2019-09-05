
#include <iostream>
using namespace std;

void FillArray(int *, int);
void DisplayArray(int*, int);
void InvertArray(int*, int*);
int Conteo(int, int*, int);
int rep=0;
int main() {
	int n, b;
	cout << "Cuantos numeros desea ingresar? ";
	cin >> n;
	int  a[n];
	FillArray(a, n - 1);
	cout << endl;
	DisplayArray(a, n - 1);
	cout << endl;
	InvertArray(a, &a[n - 1]);
	cout << endl;
	DisplayArray(a, n - 1);
	cout<<endl<<endl;
	cout<<"Que valor desea buscar?";
	cin>>b;
	cout<<"El numero se repite "<<Conteo(b, a, n - 1)<<" veces";

	}

void FillArray(int* p, int n) {
	if (n >= 0) {
		cin >> *p;
		FillArray(p + 1, n - 1);
	}
}

void DisplayArray(int* p, int n) {
	if (n >= 0) {
		cout << *p << " ";
		DisplayArray(p + 1, n - 1);
	}
}
void InvertArray(int* p, int* q) {
	int temp;
	if (p < q) {
		temp = *p;
		*p = *q;
		*q = temp;
		InvertArray(p + 1, q - 1);
	}
}

int Conteo(int b, int *p, int n){
    
        if (n >= 0) {
		if(b==*p){
		    
		    rep++;
		    
		}
		Conteo(b, p + 1, n - 1);
		
	}
	return rep;
    
    
    
}