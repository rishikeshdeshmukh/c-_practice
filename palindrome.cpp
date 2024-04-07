
#include <iostream>
using namespace std;
// 121 323
void palindrome(int num){
    int temp = num;
    int reverse = 0;
    while(temp != 0){
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;

    }
    if(reverse == num){
        cout<<"is palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}

int main(){
    int num;
    cout<<"Enter a number to check if its palindrome";
    cin>>num;
    palindrome(num);
}