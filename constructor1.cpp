#include <iostream>
using namespace std;

class student{
    int rollno;
    char name [50];
    public:
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll no :" <<rollno<<endl;
    }
    student(){
        cout<<"enter name of the student:"<<endl;
        cin>>name;
        cout<<"Enter the roll no:"<<endl;
        cin>>rollno;
    }
};

int main(){
    student s1;
    s1.display();
    return 0 ;

}