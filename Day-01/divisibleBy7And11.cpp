#include<iostream>
using namespace std;

int main(){

    int num; 
    cout << "Enter a number : ";
    cin >> num;

    if(num % 7 == 0 && num % 11 == 0){
        cout << "Yes." << endl;
        return 0;
    }else{
        cout << "No." << endl;
    }

    return 0;
}