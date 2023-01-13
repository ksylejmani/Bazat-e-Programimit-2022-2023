#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	int a=abs(-10),b=2*a;
	char op = '+';
	switch (op)
	{
		case '+': cout << "Rezultati="<< setw(5) << setfill('x') << 2*a + b; break;
		case '-': cout << "Rezultati="<< setw(5) << setfill('y') << 2*a - b; break;
		case '*': cout << "Rezultati="<< setw(5) << setfill('y') << 2*a * b; break;
		case '/': cout << "Rezultati="<< setw(5) << setfill('x') << 2*a / b; break;
		default: cout << "Asgje";
	}
	return 0;
}
