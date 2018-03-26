#include <iostream>
using namespace std;

class test
{
    int data1,data2;
public:
    test()
    {

    }
    test(int a,int b)
    {
        data1=a;
        data2=b;
    }
    void display();
    friend void multiply(test);
};

void test::display()
{
    cout<<"data1 ="<<data1<<"\ndata2 ="<<data2<<endl;
}
void multiply(test t)
{
    int data0;
    data0 = t.data1*t.data2;
    cout<<"Multiplication="<<data0<<endl;
}
int main() {
    test obj1(100,200);
    obj1.display();
    multiply(obj1);
    return 0;

}
