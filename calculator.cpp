#include <iostream>
using namespace std;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(float, float);
int modulo(int, int);

int main()
{
    int a, b, operation;
    cout << "enter two numbers: ";
    cin >> a >> b;
    do
    {
        cout << "1. Addition: " << endl;
        cout << "2. Subtraction: " << endl;
        cout << "3. Multiplication: " << endl;
        cout << "4. Division: " << endl;
        cout << "5. Modulo: " << endl;
        cout << "0. Exit: " << endl;
        cout<<endl;

        cout << "enter choice of operation (1-5 or 0 to exit): ";
        cin >> operation;
        cout<<endl;

        switch (operation)
        {
        case 1:
        {
            cout << "sum of " << a << " and " << b << ": " << add(a, b) << endl<<endl;
            break;
        }
        case 2:
        {
            cout << "subtraction of " << a << " and " << b << ": " << subtract(a, b) << endl<<endl;
            break;
        }
        case 3:
        {
            cout << "multiplication of " << a << " and " << b << ": " << multiply(a, b) << endl<<endl;
            break;
        }
        case 4:
        {
            cout << "division of " << a << " and " << b << ": " << divide(a, b) << endl<<endl;
            break;
        }
        case 5:
        {
            cout << "modulo of " << a << " and " << b << ": " << modulo(a, b) << endl<<endl;
            break;
        }
        }
    } while (operation != 0);

    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int subtract(int a, int b)
{
    int diff;
    diff = a - b;
    return diff;
}

int multiply(int a, int b)
{
    int product;
    product = a * b;
    return product;
}

float divide(float a, float b)
{
    float rem;
    rem = a / b;
    return rem;
}

int modulo(int a, int b)
{
    int quotient;
    quotient = a % b;
    return quotient;
}