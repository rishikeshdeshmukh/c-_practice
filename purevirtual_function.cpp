#include <iostream>
using namespace std;

class Base
{
public:
    string sayHi() const
      { return "Hi"; 
      } // a normal non-virtual function

    virtual string getName() const {
         return "Base";
    } // a normal virtual function

    virtual int getValue() const = 0; // a pure virtual function

    int doSomething() = 0; // Compile error: can not set non-virtual functions to 0
};