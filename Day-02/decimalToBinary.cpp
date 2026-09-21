// decimal to binary 
// 21 - 10101

#include <iostream>
using namespace std;

int main()
{
    int num, sum=0, mul=1;
    cout << "Enter a number : ";
    cin >> num;

    while(num){
        int digit = num % 2;
        sum = sum + (digit * mul);
        mul *= 10;
        num /= 2;
    }

    cout << "Binary : " << sum << endl;
    
    return 0;
}
