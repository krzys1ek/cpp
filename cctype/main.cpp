#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    cout << "Podaj teks do analizy, zakoncz go, wpisujac znak @.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " litery, "
         << whitespace << " spacje, "
         << digits << " liczby, "
         << punct << " znaki przystankow "
         << others << " inne znaki. \n";

    return 0;
}
