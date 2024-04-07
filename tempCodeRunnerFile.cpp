#include <iostream>
using namespace std;
//  Create a C++ base class Shape. 
// Derive three different classes
//  Circle, Sphere and Cylinder from shape class. 
// Write a C++ program to calculate area of Circle, Sphere and Cylinder. (pure virtual function)
class shape {
    public :
    virtual void calculateArea() = 0 ;
};

class circle : public shape{
      int radius ;
      public:
      void calculateArea(){
        cout<<"enter the radius of circle ";
        cin >> radius;
        int sum  = radius * radius  * 3.14 ;
        cout<< "area of circle is :"<< sum;
      }
};

int main(){
    shape*obj = new circle ;
    obj->calculateArea();
}