//arithmetic average, n numbers

#include <iostream>

using namespace std;

int main(){

	int n;
	float sum=0;
	cout<<"Give me quantity of numbers you want to calculate the average: ";
	cin>>n;
	float tab[n];

	for (int i=0; i<n; i++){
		cout<<"Give me the "<<i+1<<" value: ";
		cin>>tab[i];
		sum+=tab[i];
	}

	cout<<"The average is "<<sum/n<<'.';


	return 0;
}