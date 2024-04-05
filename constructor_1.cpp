#include <iostream>
using namespace std;

class student {
    int fee;
    string name;
    int rno;
    public:
    student (){
        cout<<"Enter the name of student"<<endl;
        cin>>name;
        cout<<"Enter the roll no"<<endl;
        cin>>rno;;
        cout<<"Enter the fees of the student"<<endl;
        cin>>fee;
    }
    void display();

};

void student::display(){
 cout<<"Name: "<<name<<"\n"<<"fees: "<<fee<<"\n"<<"Roll no: "<<rno<<endl;
}

int main(){
    student s1;
    s1.display();
    return 0;

}