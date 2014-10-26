//fibonacci series
//Assumption: it starts like this: 0 1 1 2 3 5
#include <iostream>

using namespace std;

int main(){
	int n;

	cout<<"Give me index of the Fibonacci number you want to get: ";
	cin>>n;

	int tab[n];
	tab[0] = 0;
	tab[1] = 1;
	for (int i=2; i<n; i++){
		tab[i] = tab[i-1] + tab[i-2];
	}
	cout<<"Wynik: "<<tab[n-1]<<endl;

	return 0;
}