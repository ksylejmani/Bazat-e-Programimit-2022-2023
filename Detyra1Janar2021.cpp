#include <iostream>
using namespace std;
int main() {
int a, b, i, x;
cout<<"Cakto a: "; cin >> a; 
cout<<"Cakto b: "; cin >> b;
i = a; x = 0;
do
{
  	  if (i % 2 != 0) { x = x + i; }
  i++;
} while (i <= b);
 cout <<"x=" <<x;
 return 0;
}
