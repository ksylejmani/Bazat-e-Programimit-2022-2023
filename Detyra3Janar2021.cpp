#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
    int main() {
    int x = 5, y = 7;
    char a = 'A', b = 'B';
    switch (abs(x-y)) {
        case 0:  cout << setfill('b') << setw(4) << x + 1; break;
        case -2: cout << setfill(b)   << setw(4) << x + 2; break;
        case 2:  cout << setfill(a)   << setw(4) << y + 1; break;
        default: cout << setfill('a') << setw(4) << y + 2; break;
    }
    return 0;
}
