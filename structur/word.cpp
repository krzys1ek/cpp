#include <iostream>
#include <string>

using namespace std;


int main()
{
    int count = 0;
    string word;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;

    while(word != "done")
    {
        count++;
        cin >> word;

    };
    cout << "You entered a total of " << count << " words.\n";

    return 0;
}