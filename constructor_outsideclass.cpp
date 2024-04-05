#include <iostream>
using namespace std;

class info{
    int id;
    char name[20];
    double num;
    public:
    info();
    void display(){
        cout<<"Name :"<<name<<" "<<id<<" "<<num<<endl;
    }
};

info :: info(){
    cin>>id;
    cin>>name;
    cin>>num;
}
int main(){
    info i1;
    i1.display();
    return 0;
}