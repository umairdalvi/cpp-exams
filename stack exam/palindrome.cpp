#include <iostream>
using namespace std;

class Stack
{
private:
    int top, size, count;
    char *arr;

public:
    Stack(int size)
    {
        this->count = 0;
        this->top = -1;
        this->size = size;
        this->arr = new char[size];
    }

    void push(char);
    void pop();
    char getTop();
    bool isPalindrome();
};

void Stack::push(char c)
{
    top++;
    arr[top] = c;
}

void Stack::pop()
{
    top--;
}

char Stack::getTop()
{
    return arr[0];
}

bool Stack::isPalindrome()
{
    

}

int main()
{
    string word;
    cout << "Enter string: ";
    getline(cin, word);

    Stack reverse(word.length());
}