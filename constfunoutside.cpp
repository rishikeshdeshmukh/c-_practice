#include <iostream>  
using namespace std;  
class temp
{
public:
	void show();
	void show() const;
};
void temp::show()
{
	cout<<"in non constant show";
}
void temp::show()const
{
	cout<<"in  constant show";
}
int main()
{
	 temp t;
	t.show();
}