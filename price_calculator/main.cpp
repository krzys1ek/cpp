#include <iostream>
#include <string>

using namespace std;

double num_netto(double brutto, double vat);

int main()
{
    double netto, brutto, margin, vat;
    
    cout << "Amount brutto: ";
    cin >> brutto;
    
    cout << "vat number: ";
    cin >> vat;
    
    netto = num_netto(brutto, vat);
    margin = netto * 1.20;
    
    cout << "Price netto: " << netto << endl;
    cout << "Price after margin: " << margin << endl;
    
    return 0;
}

double num_netto(double brutto, double vat)
{
    double netto = brutto / (1+(vat/100));  // pattern for calculate netto price from brutto
    
    return netto;
}

