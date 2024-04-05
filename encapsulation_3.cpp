#include <iostream>
using namespace std;

class check{
    private:
    int x;
    public:
    void  set(int a){
        x = a;
    

    }
    int get(){
        return x;

    }
    
};

int main(){

    int n; 
    cin>>n;
    check c1;
    c1.set(n);
    cout<<c1.get();

}