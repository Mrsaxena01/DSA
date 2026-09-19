// 0 1 1 2 3 5 8 13 21

#include <iostream>
using namespace std;

int main()
{

    int first = 0, second = 1, num;
    int current;
    cout << "Enter a number : ";
    cin >> num;

    if (num >= 1)
    {
        cout << first << " ";
    }
    if (num >= 2)
    {
        cout << second << " ";
    }

    for (int i = 3; i <= num; i++)
    {
        current = first + second;
        first = second;
        second = current;
        cout << current << " ";
    }

    return 0;
}