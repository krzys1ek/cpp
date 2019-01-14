#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool czy_pierwsza(int liczba) {
    if(liczba < 2) {
        return false;
    }
    
    for(int i = 2; i*i <= liczba; i++) {
        if(liczba % i == 0){
            return false; }
    }
    return true;
}

int main() {
    int liczba;
    
    while(true) {
        cout << "Podaj liczbe" << endl;
        cin >> liczba;

        if(czy_pierwsza(liczba)) {
            cout << "To jest liczba pierwsza !!" << endl;
        }else {
            cout << "To nie jest liczba pierwsza !" << endl;
        }
    }
  
    return 0;
}
