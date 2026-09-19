// Check whether a number is prime or not

#include <iostream>
using namespace std;

int main()
{

    int num, divider = 2;
    cout << "Enter a number : ";
    cin >> num;

    if (num < divider)
    {
        cout << "Not a Prime number. " << endl;
        return 0;
    }
    else
    {
        while (divider < num)
        {

            if (num % divider == 0)
            {
                cout << "Not a Prime number. " << endl;

                return 0;
            }
            else
            {
                divider = divider + 1;
            }
        }
        cout << "Prime number. " << endl;
    }

    return 0;
}