//Find max from n given numbers

#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Give me number of values: ";
	cin>>n;

	float tab[n];
	float max;

	for (int i=0; i<n; i++){
		cout<<"Give me "<<i+1<<" number: ";
		cin>>tab[i];
	}

	max = tab[0];

	for (int i=0; i<n; i++){
		if (tab[i]>max)
			max = tab[i];
	}

	cout<<"Highest value is "<<max<<'.';
	return 0;
}