 #include <iostream>
 using namespace std;

 class date{
    int dd,mm,yy;
    public:
    void show(){
         cout<<dd<<" / "<<mm<<" / " <<yy<<endl;
    }
    date(int x , int y , int z){
        this->dd = x;
        (*this).mm = y;
        this->yy = z;
    }
 };
 int main()
{
	date d1(1,1,1);
	d1.show();
	date d2(2,2,2);
	d2.show();
}
