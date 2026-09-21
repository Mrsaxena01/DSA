// reverse of a number

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number : ";
    cin >> num;
    int actualNum = num;

    while (num)
    {
        int digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }

    cout << "Reverse of a " << actualNum << " : " << sum;

    return 0;
}
