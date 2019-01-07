#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    for(int w = 1; w <= 10; w++)
    {
        
        for(int k = 1; k <= 10; k++)
        {
            cout.width(3);
            cout << k * w;
        };
        
        cout << endl;
        
    };
    
    
    return 0;
}
