#include <iostream>

using namespace std;

class employee;
class boss
{
    int salary;
public:
    boss(){}
    boss(int a)
    {
        salary = a;
    }
    void display_boss_sal()
    {
        cout<<"Boss salary ="<<salary<<endl;
    }
    friend void total_salary(boss, employee);
};

class employee
{
    int salary;
public:
    employee(){}
    employee(int a)
    {
        salary = a;
    }
    void display_employee_sal()
    {
        cout<<"Employee salary ="<<salary<<endl;
    }
    friend void total_salary(boss, employee);
};

void total_salary(boss b,employee e)
{
    int total;
    total = b.salary+e.salary;
    cout<<"Total salary = "<<total<<endl;
}


int main()
{
   boss b(4000000);
   b.display_boss_sal();
   employee e(75000);
   e.display_employee_sal();
   total_salary(b,e);
    return 0;
}
