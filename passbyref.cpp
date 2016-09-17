// Programmer: Nate Sobol
// Title: Pass ByRef/Val
// Last Modified: 9/17/16
// Purpose: Simple sample program that passes references/values to functions

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void passByValue(int, int);
void passByRef(int&, int&);
void passBySimRef(int*, int*);

int main() {
	int x = 5, y = 4;
	system("cls");
	passByValue(x, y);
	cout << "The new values of x and y are " << x << " and " << y << "\n";

	passByRef(x, y);
	cout << "The next values of x and y are " << x << " and " << y << "\n";

	passBySimRef(&x, &y);
	cout << "The final values of  and y are " << x << " and " << y << "\n";

	cout << "Press a key...";
	_getch();

	return 0;
}

void passByValue(int x, int y) {
	x = x * y;
	y = x * y;
}

void passByRef(int &x, int &y) {
	x = x*y;
	y = x*y;
}

void passBySimRef(int *x, int *y) {
	*x = *x * *y;
	*y = *x * *y;
}