// Start pyramid
// *
// * *
// * * *
// * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a lenght : ";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
