#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const int minuty = 60;
    const int godziny = 3600;
    const int dni = 86400;
    const int rok = 31536000;
    long long sekundy;

    int liczba_dni, liczba_godzin, liczba_minut, liczba_sekund;
    int reszta1, reszta2, reszta3;

    cout << "Podaj liczbe sekund: " << endl;
    cin >> sekundy;

    cout << "Wynik: " << endl;
    cout << "--------------------" << endl;
    liczba_dni = sekundy / dni;
    reszta1 = sekundy % dni;

    cout << "Liczba dni: " << liczba_dni << endl;
    liczba_godzin = reszta1 / godziny;
    cout << "Liczba godzin: " << liczba_godzin << endl;
    reszta2 = reszta1 % godziny;
    liczba_minut = reszta2 / minuty;
    cout << "Liczba minut: " << liczba_minut << endl;
    reszta3 = reszta2 % minuty;
    liczba_sekund = reszta3;
    cout << liczba_sekund << endl;

    return 0;
}
