#include <iostream>

using namespace std;

int main()
{
    int i;
    char znak = {'A'};
    int liczba_rzad = 2;
    
    for( i = 0; i < 100; i++, ++znak)
    {
        if(znak > 'Z')
            break;
        cout << znak; // wypis liczby
        
        if((i + 1) % liczba_rzad)
            cout << ' '; // spacja oddzielajaca
        else
            cout << endl;
        
        if(znak == 'H') // po ósmym znaku
        {
            cout << "Po ile w rzedzie?: ";
            cin >> liczba_rzad;
             i = -1;
        }
    };
    
    return 0;
    
}


