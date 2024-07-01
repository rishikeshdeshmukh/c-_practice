

#include <iostream>
using namespace std;

class practice{
    public :
    void fun() const{
        cout << "this is a constant function" << endl;
    } ;

};



int main(){

    const practice obj1;
    obj1.fun();
}
