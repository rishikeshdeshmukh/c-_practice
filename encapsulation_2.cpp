#include <iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
    person(string name , int age){
        this-> name = name ;
        this-> age = age;

    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void setAge(int age){
        this-> age = age;
    }
    void setName(string name){
        this-> name = name ;
    }

};



int main(){
    person p1("John Doe", 30);

    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;

    p1.setAge(99);
    cout<<p1.getAge()<<endl;
    p1.setName("rishi deshmukh");
    cout<<p1.getName()<<endl;
}