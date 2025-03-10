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

    int rowNum, colNum, sum = 0;
    
    cout<<endl;
    cout << "enter row to add: ";
    cin >> rowNum;


    for (int i = 0; i < colSize; i++)
    {
        sum = sum + myArray[rowNum][i];
    }

    cout << "sum of row " << rowNum << " is: " << sum;
    cout << endl;

    sum = 0;

    cout<<endl;
    cout << "enter col to add: ";
    cin >> colNum;

    for (int i = 0; i < rowSize; i++)
    {
        sum = sum + myArray[i][colNum];
    }

    cout << "sum of col " << colNum << " is: " << sum;
    cout << endl;

    return 0;
}