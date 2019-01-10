#include <iostream>


using namespace std;

int main()
{
    int i, j, k;
    
    int x = 5;
    int y = 1;
    
    for( i = 1; i <= 5; i++)
    {
        cout << "petla" << i;
        for( j = 1; j <= x; j++)
        {
            cout << " ";
        }
        x--;
        
        for( k = 1; k <= y; k++)
        {
            cout << "*";
        }
        y = y + 2;
        cout << endl;
    }
    
    return 0;
    
}


