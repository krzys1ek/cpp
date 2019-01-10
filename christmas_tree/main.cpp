#include <iostream>


using namespace std;

int main()
{
    int i, j;
    
    int x = 5;
    int y = 1;
    
    for( j = 1; j <= 5; j++)
    {
        cout << " ";
        for( i = 1; i <= x; i++)
        {
            cout << " ";
        }
        x--;
        
        for( i = 1; i <= y; i++)
        {
            cout << "*";
        }
        y = y + 2;
        cout << endl;
    }
    
    return 0;
    
}


