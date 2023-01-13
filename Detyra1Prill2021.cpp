#include <iostream>
using namespace std;
int main() {
    int a, b, i, x;
    cout<<"Cakto a dhe b: ";
    cin >> a; cin >> b;
    i = a; x = 0;
    for (i = a; i <= b; i++)
        if (i % 3 == 0)
            x++;
    cout << x;
    return 0;
}
