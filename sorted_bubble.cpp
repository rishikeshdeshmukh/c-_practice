#include <iostream>
using namespace std;

void bubblesort(int arr[], int n ){
        for(int i = 0 ; i < n  ; i++ ){
            for(int j = 1 ; j < n - i - 1 ; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j  ] = arr[ j + 1 ];
                    arr[j + 1  ] = temp;
                }
            }
        }


}



int main(){
    int arr[] ={1,3,51,1235,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i < n ;i++){
        cout<<arr[i];
        cout<<" ";
    }
}