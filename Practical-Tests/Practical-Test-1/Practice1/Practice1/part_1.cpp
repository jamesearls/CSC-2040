#include "part_1.h"

int get_mid(int a, int b, int c) 
{
	if (a >= b) {
		if (a <= c) return a;
		if (b >= c) return b;
		return c;
	}
	else {
		if (a >= c) return a;
		if (b >= c) return c;
		return b;
	}
}

void reverse(double& u, double& v, double& x, double& y)
{
	double temp = u;
	 u = y;
	 y = temp;
	 temp = v;
	 v = x;
	 x = temp;
}