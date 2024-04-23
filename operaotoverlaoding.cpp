#include<iostream>
using namespace std;
class com{
	
	int r;
    int i ;
	
	public:
		void get(){
			cout<<"enter the real and img"<<endl;
			cin>>r  >>i ;
		};
		void display(){
            if(r>0){
			cout<<r<<" + "<<i<<"i"<<endl;}
            else{
                cout<<r << i<<"i"<<endl;
            }
		}
	com operator+(com c2) {
		com c ; 
		c.r = r + c2.r;
		c.i =  i + c2.i;
		return c ;
	};
    com operator-(com c2){
        com c ; 
		c.r = r - c2.r;
		c.i =  i - c2.i;
		return c ;
    }
    com operator-()const{
        com c ; 
		c.r = -r ;
		c.i = -i;
		return c ;
    }
    com operator++(){
      ++r;
      ++i;
		return *this ;
    }
     com operator++(int){
      com c = *this;
      ++(*this);
		return c ;
    }
		
};


int main()
{
	 com c1, c2, c3, c4;
    c1.get();
    c2.get();

    cout << "c1 + c2: ";
    c3 = c1 + c2;
    c3.display();

    cout << "c1 - c2: ";
    c3 = c1 - c2;
    c3.display();

    cout << "Negative of c1: ";
    c3 = -c1;
    c3.display();

    cout << "Negative of c2: ";
    c4 = -c2;
    c4.display();

    cout << "Incrementing c1: ";
    c3 = ++c1;
    c3.display();

    cout << "c1 after incrementing: ";
    c1.display();

    cout << "Postfix increment of c1: ";
    c4 = c1++;
    c4.display();

    cout << "c1 after postfix increment: ";
    c1.display();

    return 0;
	
	
}