// rectanglePatternOfAlphabet.cpp
// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

#include <iostream>
    using namespace std;

int main()
{

    int totalLength;
    cout << "Enter a number :";
    cin >> totalLength;

    for (int row = 1; row <= totalLength; row++)
    {
        char c = 'a';
        for (int col = 1; col <= totalLength; col++)
        {
            cout << c << " ";
            c++;

        }
        cout << endl;
    }

    return 0;
}