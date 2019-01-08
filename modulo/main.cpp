#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "give me a number: ";
    
    while(cin >> n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                cout << i << endl;
            }
        } cout << "give me a number: ";
    }
    
    return 0;
}
