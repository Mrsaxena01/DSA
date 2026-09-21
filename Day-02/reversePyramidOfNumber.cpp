// reverse pyramid of number 
// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a lenght : ";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        // space
        for(int col = 1; col <= row-1; col++){
            cout << " ";
        }

        // number
        for (int col = 1; col <= num - row + 1; col++)
        {
            cout << col;
        }
        cout << endl;
    }
    
    
    
    return 0;
}
