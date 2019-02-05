#include <iostream>

using namespace std;

struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };

int main()
{
    inflatable guest = 
    {
        "Glorious Gloria", // wartosc pola name
        1.88,  // wartosc pola volume
        29.99   // wartosc pola price
    }; // guest to zmienna strukturalna typu inflatable.
    // zmienną tę inicjalizujemy wartościmi jak powyej.

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    }; // pal to druga zmienna typu inflatable

    cout << "Wpisz na swoją listę gości jeszcze: " << guest.name;
    cout << " oraz " << pal.name << "!\n";
    //pal.name to pole name zmiennej pal
    cout << "Moesz mieć ich oboje za ";
    cout << guest.price + pal.price << " zł!\n";
    return 0;
}
