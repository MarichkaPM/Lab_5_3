#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double p(const double x);

int main()
{
	double gp, gk, dg;
	double k;
	int n;
	cout << "gp = "; cin >> gp; 
	cout << "gk = "; cin >> gk; 
	cout << "n = "; cin >> n; 

	dg = (gk - gp) / n;
	double g = gp;
	cout << "-----------------------------" << endl;
	cout << "|" << setw(7) << "g" << setw(7) << " |" << setw(7) << "k" << setw(7) << " |" << endl;
	cout << fixed;
	while (g <= gk)
	{
		k = p(1 - 2 * g) + p(1 - p(1) + p(2 * g) * 
			p(2 * g)) * p(1 - p(1) + p(2 * g) *
			p(2 * g));
		cout << "| "<< setw(8)<< setprecision(4) << g  << setw(5) << " |" <<setw(8) << setprecision(4)
			<< k <<setw(6)<<" |" << endl;
		g += dg;
	}
	cout << "-----------------------------" << endl;
	cout << p(-3) << endl;
	return 0;

}

double p(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x) * cos(x) - sin(x)) / exp(sin(x)));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1/2.;
		S = a;
		do
		{ 
			j++;
			double R = -1;
			a *= R;
			S += a;
		} while (j < 4);
			return (1./cos(x))*S;
		
	}
}