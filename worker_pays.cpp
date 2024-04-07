// Write a c++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, Pay_Rate and Salary.
//  Write necessary functions to calculate and display the salary of Worker. (Use Default values for Pay_Rate)
// get and set functions payrate default in class 
#include <iostream>
using namespace std;
class worker{
    double salary , hours;
    double payRate = 1000;
    public:
   
    void set_salary(double hours){
      salary = hours * payRate;
        
         
    }
    double get_salary(){
        return salary;
    }

};

int main (){
    worker w1;
    double hours ;
    string name ;
    cout<<"Enter the Name and no of hours of work  of Worker"<<endl;
    cin>>name;
    cin>>hours;
    w1.set_salary(hours);
    cout<<w1.get_salary()<<endl;
}
