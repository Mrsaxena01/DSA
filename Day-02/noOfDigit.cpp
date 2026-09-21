// No. of digit
#include <iostream>
using namespace std;

int main()
{
    int num, digit = 0;
    cout << "Enter a number : ";
    cin >> num;

    while(num){
        digit++;
        num = num/10;
    }
    
    cout << "No. of digit : " << digit << endl;

    system("pause");
    return 0;
}
