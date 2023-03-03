#include <iostream>
using namespace std;
class Destdemo
{
    int *t;
    public:
    Destdemo()
    {
        t=new int;
    }
    void accept()
    {
        cout<<"\nEnter the value : ";
        cin>>*t;
    }

    void display()
    {
        cout<<"\nThe value : "<<*t;
    }

    ~Destdemo()
    {
        delete t;
        cout<<"\nObject Deleted!!!";
    }

};
int main()
{
    Destdemo object;
    object.accept();
    object.display();

    return 0;
}