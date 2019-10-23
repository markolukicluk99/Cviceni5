

#include <iostream>


void soucet(double a[2], double b[2], double c[2])
{
	//c[0] = a[0] + b[0];

	c[0] = printf("%f + %fj", a[0], b[0]);

	//c[1] = a[1] + b[1];
}

void rozdil(double a[2], double b[2], double c[2])
{
	//c[0] = a[0] - b[0];
	//c[1] = a[1] - b[1];
}

void tisk(double c[2]) 
{
	printf("%c\n", c[0]);
}

int main(void)
{
	double a[2] = { 1.5, 2 };
	double b[2] = { 4.5, -2 };
	double c[2];

	soucet(a, b, c);
	rozdil(a, b, c);
	tisk(c);

	return 0;

}