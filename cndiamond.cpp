#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int rows, i, j;
    int row = 1;
    cout << "Enter the number of rows: ";
    cin >> rows;
    i = rows / 2;
    while (i > 0)
    { // print upper part
        j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= )
        {
            cout << '*';
            cout << " ";
            j++;
        }
        cout << "\n";
        row++;
        i--;
    }

    i = 0;
    while (i <= rows / 2)
    {
        j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }

        j = row;
        while (j >= 1)
        { // print lower part
            cout << '*';
            cout << " ";
            j--;
        }
        cout << "\n";
        row--;
        i++;
    }
    return 0;
}