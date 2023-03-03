#include <iostream>
using namespace std;

class sample2;
class sample1
{
    int a = 74;

public:
    friend int max(sample1 obj1, sample2 obj2);
};

class sample2
{
    int b = 58;

public:
    friend int max(sample1 obj1, sample2 obj2);
};
int max(sample1 obj1, sample2 obj2)
{
    if (obj1.a > obj2.b)
    {
        cout << "obj1 is greater!!";
    }

    else if (obj1.a < obj2.b)
    {
        cout << "obj2 is greater!!";
    }

    else
    {
        cout << "both are equal!!!";
    }
}

int main()
{
    sample1 ex1;
    sample2 ex2;

    max(ex1, ex2);
    return 0;
}
