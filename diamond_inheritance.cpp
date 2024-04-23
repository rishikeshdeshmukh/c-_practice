#include <iostream>
using namespace std;


class base{
    public :
    void display(){
        cout<<"in the base class"<<endl;
    }
};

class childA : virtual public base{
    public :
    void display()
    {
    cout<<"inside the childA class"<<endl;
}
};
class childB : virtual public base{
    public :
    void display()
    {
    cout<<"inside the childB class"<<endl;
}
};

class childC: public childA , public childB{
    public :
    void display(){
        base::display();
    }
 
};
int main(){
    childC obj ;
    obj.display();
    return 0 ;
}