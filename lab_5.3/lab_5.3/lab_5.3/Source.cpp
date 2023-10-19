#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double j(const double x);
int main()
{
	double kp, kk, z;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double kg = (kk - kp) / n;
	double k = kp;

	cout << "_______________________________" << endl;
	cout << "|" << setw(5) << "k" << setw(2) << "|" << setw(10) << "z" << endl;
	cout << "_______________________________" << endl;


	while (k <= kk)
	{
		z = j(1 + k + j(k)) + j(1 + k * k) * j(1 + k * k);
		cout << "|" << setw(5) << k << setw(2) << "|" << setw(10) << z << endl;
		k += kg;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + exp(-x)) / (cos(x * x) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x * x) / ((4 * i * i) + (2 * i));
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}
}