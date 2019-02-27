/*
 * You sell the book C++ for Fools. Write a program that has you enter a
 * year's worth of monthly sales (in terms of number of books, not of
 * money). The program should use a loop to prompt you by month, using an
 * array of char * (or an array of string objects, if you prefer)
 * initialized to the month strings and storing the input data in an array
 * of int. Then, the program should find the sum of the array contents and
 * report the total sales for the year.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char * months[12] =
        {
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
        };

    int sale[3][12];
    int total[3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter the sales in " << months[j] << " of year "
                 << i + 1 << ": ";
            cin >> sale[i][j];

            total[i] += sale[i][j];
        }
    };

    int alltotal = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "The total sales for the year " << i + 1
             << " is " << total[i] << ".\n";
        alltotal += total[i];
    }
    cout << "The total sales for the combined years is " << alltotal
         << ".\n";

    return 0;
}