#include <iostream>
using namespace std;

int main()
{

    int x = 36;
    const int capacity = 1000;
    int nums[capacity];

    int counter = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            nums[counter] = i;
            counter++;
        }
    }

    for (int i = 0; i < counter; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}