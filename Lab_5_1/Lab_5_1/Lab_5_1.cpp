#include <iostream>
#include <cmath>

using namespace std;

double sum(const double x, const double y); // об'явив функцію

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double answ = sum(1, s + t) + sum(s, s - t) - sum(t, sqrt(pow(s, 2) + pow(t, 2)));

	cout << "answ = " << answ << endl;

	return 0;

}

double sum(const double x, const double y) // розписав функцію
{
	return (pow(x, 2) + pow(y, 2)) / (1 + pow(x, 2) + pow(x, 2) * pow(x, 2));
}