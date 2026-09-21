// rectanglePatternOfColumn.cpp
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{

    int totalLength;
    cout << "Enter a number :";
    cin >> totalLength;

    for (int row = 1; row <= totalLength; row++)
    {
        for (int col = 1; col <= totalLength; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}