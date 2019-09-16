#include <iostream>

using namespace std;

int main() {

    int fila, columna;
    int mat[6][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    int submat[5][5];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << mat[i][j] << "    ";
        }
        cout << endl;
    }

    cout << "Ingrese el numero de fila que desea eliminar(1-6): ";
    cin>>fila;
    cout << "Ingrese el numero de columna que desea eliminar(1-6): ";
    cin>>columna;

    int f = 0;
    

for (int i = 0; i < 6; i++){
         if (i != fila-1){
            int c = 0;
            
            for (int j = 0;j < 6; j++)
               if (j != columna - 1){
                  submat[f][c] = mat[i][j];
                  c++;
               }
            
            f++;
         }
}
    

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << submat[i][j] << "    ";
        }
        cout << endl;
    }

    return 0;
}