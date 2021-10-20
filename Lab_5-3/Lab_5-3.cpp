#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double tp, tk, z, x;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double t = tp;
	cout << fixed;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(5) << "t" << " |"
			<< setw(10) << "z" 
			<< endl;
		cout << "-------------------------------------------------" << endl;
	while (t <= tk)
	{		
	    z = f(t * t) + 2 * f(2 * t + 1);
		cout << t << " " << z << endl;
		t += n;
	}
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (sin(x) + cos(x));
	else
	{
		double S;
		int i = 0;
		double a = pow(x,3);
		S = a;
		do
		{
			i++;
			double R = x * x / (2. * i * (1 + 2. * i));
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}
