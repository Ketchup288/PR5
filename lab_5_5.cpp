#include <cmath>
#include <iostream>

using namespace std; 

int main(){
	double x = 20;
	double y = 5;
	double a = (pow(x, 2) + pow(y, 2))/ (1 + pow(x, 2) + pow(x, 2) * pow(x, 2));
	cout << a << endl;
}