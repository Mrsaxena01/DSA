// Alphabet pyramid
// a
// a b 
// a b c 
// a b c d 
// a b c d e 

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a lenght : ";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        char c = 'a';
        for (int col = 0; col < row; col++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}
