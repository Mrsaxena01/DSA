// binary to decimal 
// ex :- 101 - 5

#include <iostream>
using namespace std;

int main()
{
    
    int num, sum=0, mul = 1;
    cout << "Enter a number : ";
    cin >> num;

    while(num){
        int digit = num % 10;
        sum = sum + digit * mul;
        mul = mul * 2;
        num = num / 10;
    }

    cout << "Decimal : " << sum;
    
    return 0;
}
