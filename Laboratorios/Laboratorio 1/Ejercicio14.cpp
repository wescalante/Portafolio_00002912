#include <iostream>
#include <string>

using namespace std;

bool palindrome(string *);
int main() {
    
    string palabra;
    cout<<"Introduzca la palabra a verificar: ";
    cin>>palabra;
    
    if(palindrome(&palabra)==true){
        cout<<"la palabra \""<< palabra<<"\" es palindrome";
    }
    else{
        cout<<"la palabra \""<< palabra<<"\" no es palindrome";
    }
    

    return 0;
}

bool palindrome(string *c) {
    

    for (int i = 0; i < ((*c).length())/2; i++) {
        if ((*c).at(i) == (*c).at((*c).length()-i-1)) {
            return true;

        } else {
            return false;
        }
    }

    
}
