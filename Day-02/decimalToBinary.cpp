// decimal to binary 
// 21 - 10101

#include <iostream>
using namespace std;

int main()
{
    int num, sum=0, i=0;
    cout << "Enter a number : ";
    cin >> num;

    while(num){
        int digit = num % 2;
        sum += digit * (10 ^ i++);
        num /= 2;
    }

    cout << "Binary : " << sum << endl;
    
    system("pause");
    return 0;
}
