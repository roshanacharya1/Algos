#include <iostream>

using namespace std;

class cube
{
    int a, acube;
public:
    void geta();
    inline void cubea();
    void show();
};

void cube::geta()
{
    cout << endl << "Enter a number:" ;
    cin >> a ;
}

void cube::cubea()
{
    acube = a*a*a ;
}

void cube::show()
{
    cout << endl << "Entered number(a)=" << a << endl << "Cube of a=" << acube << endl ;
}


int main()
{
    cube c1;
    c1.geta();
    c1.cubea();
    c1.show();
    return 0;
}
