#include <iostream>
using namespace std;

int factor(int x)
{
    const int capacity = 1000;
    int nums[capacity];

    int counter = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            nums[counter] = i;
            counter++;
        }
    }

    if (x < 10)
    {
        cout << x << "  : ";
    }
    else if (x < 100)
    {
        cout << x << " : ";
    }
    else
    {
        cout << x << ": ";
    }

    for (int i = 0; i < counter; i++)
    {
        if (nums[i] < 10)
        {
            cout << nums[i] << "   ";
        }
        else if (nums[i] < 100)
        {
            cout << nums[i] << "  ";
        }
        else
        {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    /*
    int x = 0;
    cout << "Enter the number: ";
    cin >> x;
    */
    for (int i = 0; i < 1000; i++)
    {
        factor(i);
    }
}