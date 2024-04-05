#include <iostream>
using namespace std;

class phone{
    int num ;
    public:
    phone(int x = 9158){
        num = x;
    }
    int display(){
        return num;

    }
};


int main(){
    phone p1;
    cout<<p1.display();
    phone p2(9898);
    cout<<p2.display();



}
