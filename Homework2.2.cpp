#include <iostream>
#include <math.h>
using namespace std;


double f(double x) // 방정식
{
	return cos(x) - x;
}

double f_deriv(double x) // 방정식을 미분한 식
{
	return -(sin(x) + 1);
}

double radian(int num) // 호도 구하는 공식
{
	return num * (3.14159265359 / 180);
}

int main(void)
{
	double a = 0.5; //p0
	double b = radian(45);// p1
	
	
	cout << fixed;
	cout.precision(10);

	cout << "    Secant" << endl;
	cout << "n            pn" << endl;
	cout << "0            " << a << endl;
	cout << "1            " << b << endl;
	for (int i = 2;i <= 5; i++)
	{
		double pn = b - (f(b)*(b - a)) / (f(b) - f(a));
		a = pn;
		cout << i << "            " << pn << endl;
	}

	cout << "   Newton's" << endl;
	cout << "n            pn" << endl;
	cout << "0            " << b << endl;
	for (int i = 1; i < 5; i++)
	{
		double pn = b - f(b) / f_deriv(b);
		b = pn;
		cout << i << "            " << pn << endl;
	}

}