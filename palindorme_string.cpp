#include <iostream>
using namespace std;
#include <string.h>
void string_check(string n){
            int len = n.length();
            for(int i = 0 ; i < len / 2 ; i++){
                if(n[i] != n[len - i - 1]){
                    cout<<"not palindrome";
                    
                }
            }
            // cout<<" is palindrome";
}

int main (){
    string s;
    cout<<"enter the string";
    cin>>s;
    string_check(s);
}