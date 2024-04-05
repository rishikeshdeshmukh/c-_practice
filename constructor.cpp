#include <iostream>
using namespace std;

class mydate{
    public:
    int dd,mm,yy;
    void display(){
        cout<<"date is "<<dd<<" / "<<mm<<" / "<<yy<<endl;
    }
    mydate(){
        dd=11;
        mm=23;
        yy=2300;
    }
    mydate(int d , int m , int y)
{
    dd = d;
    mm = m ;
    yy = y;
}
};
int main(){
    mydate d1;
    d1.display();
    mydate d2(12,2,2024);
    d2.display();
    
}