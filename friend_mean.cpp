#include <iostream>
using namespace std;

class sample2;
class sample1
{
    int a = 74;

public:
    friend int mean(sample1 obj1, sample2 obj2);
};

class sample2
{
    int b = 58;

public:
    friend int mean(sample1 obj1, sample2 obj2);
};
int mean(sample1 obj1, sample2 obj2)
{
    return ((obj1.a + obj2.b)/2);
}

int main()
{
    sample1 ex1;
    sample2 ex2;

    cout<<mean(ex1, ex2);
    return 0;
}
