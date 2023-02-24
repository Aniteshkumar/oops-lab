#include <iostream>
using namespace std;

class sample2;
class sample1
{
    int a=879;

public:
    friend int add(sample1 obj1, sample2 obj2);
};

class sample2
{
    int b=58;

public:
    friend int add(sample1, sample2);
};
int add(sample1 obj1, sample2 obj2)
{
    return (obj1.a + obj2.b);
}

int main()
{
    sample1 ex1;
    sample2 ex2;

    cout<<add(ex1,ex2);
    return 0;
}
