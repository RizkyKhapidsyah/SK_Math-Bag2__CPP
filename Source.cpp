#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	int i, n;
	float c, dx, x;

	dx = 0.1;
	n = 10;

	i = 1;
	cout << "No     X      SIN(X)  \n";

	while (i < n)
	{
		x = i * dx;
		c = cos(x);

		printf("%d  %f  %f  \n", i, x, c);
		i++;
	}

	_getch();
	return 0;
}