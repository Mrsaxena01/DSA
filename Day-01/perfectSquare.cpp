// Check whether a number is a perfect square or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "Entyer a number : ";
    cin >> num;

    int res = sqrt(num);

    if(res * res == num){
        cout << num << " is a perfect square." << endl;
    }
    else{
        cout << num << " is not a perfect square." << endl;
    }
    return 0;
}