//cout roots of a square equation

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float a, b, c, x1, x2, delta;

	cout<<"Give me the a coefficient of the equation: ";
	cin>>a;

	cout<<"Give me the b coefficient of the equation: ";
	cin>>b;

	cout<<"Give me the c coefficient of the equation: ";
	cin>>c;

	delta = b*b - 4*a*c;

	if (delta >0){
		x1 = (-b - pow(delta, 1.0/2))/(2*a);
		x2 = (-b + pow(delta, 1.0/2))/(2*a);
		cout<<"x1 = "<<x1<<" and x2 = "<<x2<<'.';
		cout<<"Check: "<<a*x1*x1 + b*x1 + c;
		cout<<"Check: "<<a*x2*x2 + b*x2 + c;
	}

	else if (delta == 0){
		x1 = -b / (2*a);
		cout<<"x = "<<x1;
		cout<<"Check: "<<a*x1*x1 + b*x1 + c;
	}

	else {
		cout<<"There are no real roots.";
	}

	return 0;
}