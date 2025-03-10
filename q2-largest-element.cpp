#include <iostream>

using namespace std;

int main()
{

    int rowSize, colSize;

    cout << "enter row size: ";
    cin >> rowSize;
    cout << "enter col size: ";
    cin >> colSize;
    cout << endl;

    int myArray[rowSize][colSize];

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "enter data for [" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    int max = myArray[0][0];

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (myArray[i][j] > max)
            {
                max = myArray[i][j];
            }
        }
    }

    cout << endl;
    cout << "largest element is: " << max;
    cout << endl<<endl;

    return 0;
}