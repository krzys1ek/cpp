#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> liczby{3.14, 3.1, 7.54};
    for (auto elem : liczby)
    {
        cout << elem << ", ";
    };
    
    return 0;
}
