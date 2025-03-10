#include <iostream>

using namespace std;

int main()
{

    int size, idx = 0;
    cout << "enter size of array: ";
    cin >> size;
    int myArray[size], negativeArray[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter data for " << i << ": ";
        cin >> myArray[i];
    }

    bool negative;

    for (int i = 0; i < size; i++)
    {
        if (myArray[i] < 0)
        {
            negative = true;
            negativeArray[idx] = myArray[i];
            idx++;
        }
    }

    if (negative)
    {
        cout << "negative elements are: ";
        for (int i = 0; i < idx; i++)
        {
            cout << negativeArray[i] << " ";
        }
    }
    else
    {
        cout << "no negative elements found."<<endl;
    }

    return 0;
}