#include <iostream>
using namespace std;

class getset{
    public:
    int x ;
    void set_data(int a){
        x = a ;

    }
    int get_data () const {
        return x;
    }
};

int main(){
    getset g1;

    g1.set_data(99);
    
    cout<< g1.get_data() << endl;
}