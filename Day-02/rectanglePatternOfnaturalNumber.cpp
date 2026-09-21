// rectangle Pattern Of Natural Number
// 1 2 3 4 5 
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25



#include <iostream>
using namespace std;

int main()
{

    int totalLength, digit = 1;
    cout << "Enter a number :";
    cin >> totalLength;

    for (int row = 1; row <= totalLength; row++)
    {
        for (int col = 1; col <= totalLength; col++)
        {
            cout << digit << " ";
            digit++;
        }
        cout << endl;
    }

    return 0;
}
