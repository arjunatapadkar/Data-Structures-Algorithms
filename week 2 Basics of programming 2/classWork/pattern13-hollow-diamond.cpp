

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows : " << endl;
    cin >> n;

    // outer loop for hollow diamond to keep track of rows
    for (int row = 0; row < n; row++)
    {

        // print spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // print stars of hoolw diamond
        for (int col = 0; col < 2 * row + 1; col++)
        {

            if (col == 0 || col == 2 * row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {

        // for inverted hollow pyramid spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // for inverted hollow pyramid stars
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {

            if (col == 0 || col==2*(n-row)-2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}