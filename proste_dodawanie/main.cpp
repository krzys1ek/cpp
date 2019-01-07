#include <iostream>

using namespace std;

int main()
{
    int t;
    int suma = 0;
    cin >> t;
    
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        
        for (int j = 1; j <= x; j++)
        {
            int liczba;
            cin >> liczba;
            
            suma += liczba;
        }
        cout << suma << endl;
        suma = 0;
    }
    
    return 0;
}
