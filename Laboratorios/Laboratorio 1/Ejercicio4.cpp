#include <iostream>
#include <string>

using namespace std;

string pword(string *);

int main() {
    string cad;
    cout << "Ingrese la frase a convertir" << endl;


    getline(cin, cad);

    cout << "La cadena convertida es: " << pword(&cad) << endl;


    return 0;
}

string pword(string *c) {
    string nCad = "";

    for (int i = 0; i < (*c).length(); i++) {
        if ((*c).at(i) == 'a' || (*c).at(i) == 'e' || (*c).at(i) == 'i' || (*c).at(i) == 'o' || (*c).at(i) == 'u') {
            nCad += (*c).at(i);
            nCad += 'p';
            nCad += (*c).at(i);

        } else {
            nCad += (*c).at(i);
        }
    }

    return nCad;
}
