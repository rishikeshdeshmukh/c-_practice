
// Write a c++ program to find volume of cylinder, cone and sphere. (Use function overloading)
//  Cylinder = πr2h
//  Cone = πr2h/3
//  Sphere = 4/3πr3
#include <iostream>
using namespace std;
const double PI = 3.14 ; 
class volume_calculator{
    public:
    double volume(double radius, double height ){
        return PI * radius * height;
    }
    double volume(double radius , double height , char s){
        return PI * radius * 2 * (height / 3);

    }
    double volume (double radius){
        return (4/3)* PI * radius * 3;
    }
};


int main(){
    int radius , height,cylinder,cone,sphere;
    cout<<"Enter the radius";
    cin>>radius;
    cout<<"Enter the height";
    cin>>height;
    volume_calculator vc ;
    cout<<"Volume of cylinder :"<<vc.volume(radius,height)<<endl;
    cout<<"Volume of cone :"<<vc.volume(radius,height,'c')<<endl;
    cout<<"Volume of sphere :"<<vc.volume(height)<<endl;
}