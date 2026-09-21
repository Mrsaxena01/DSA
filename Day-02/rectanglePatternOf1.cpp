// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1

#include <iostream>
using namespace std;

int main()
{

    int totalLength;
    cout << "Enter lenth of rectangle : ";
    cin >> totalLength;

    for (int row = 1; row <= totalLength; row++)
    {
        for (int col = 1; col <= totalLength; col++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }

    return 0;
}