#include<iostream>
using namespace std;
class base {
public:
virtual void show() 
	{
    cout<< "\n  Base class show:";
	}
void display() {
    cout<< "\n  Base class display:";
    }
};
class drive : public base {
public:
void display() 
	{
    cout<< "\n  Drive class display:";
    }
void show() 
	{
    cout<< "\n  Drive class show:";
    }
};

int main() 
{
    base obj1;
    base *p;
    cout << "P points to base:\n";
    p = &obj1;
    p->display();
    p->show();
    cout << "\nP points to drive:\n";
    drive obj2;
    p = &obj2;
    p->display();
    p->show();
    return 0;
}
