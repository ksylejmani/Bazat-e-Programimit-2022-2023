#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int r, l;
    const double PI=3.14;
    double s, p, v;

    cout << "Jepe r dhe l; ";
    cin >> r >> l;
    s = PI*pow(r,2);
    p = 2*PI*r;
    v = s*l;

    cout << "Syprina: " << s << endl;
    cout << "Perimetri: " << p << endl;
    cout << "Vellimi: " << v << endl;

    return 0;
}
