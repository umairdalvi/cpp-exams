#include <iostream>

using namespace std;

int main()
{

    int size;

    cout << "enter row & col size: ";
    cin >> size;
    cout << endl;

    int myArray[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "enter data for [" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "transpose of the array: ";
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << myArray[j][i] << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}