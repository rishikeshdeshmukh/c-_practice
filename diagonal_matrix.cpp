#include <iostream>
using namespace std;


int main(){
    int x = 1;
    int a = 0;
    int arr[3][3];
    
    for(int k = 0 ; k < 3 ; k++){
       for(int p = 0 ; p < 3 ; p++){
        cin>>arr[k][p];
       }
    }
    for(int i = 0 ; i < 3 ; i++ ){
        
        for(int j = 1 ; j <= 3; j++){
            if(j==x & i == a){
            cout<<" ";
            
            x++; 
            a++;
            
            }
            else{
            cout<<arr[i][j-1];
            cout<<" ";
            }
        }
        cout<<endl;
    }

}