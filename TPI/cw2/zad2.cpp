//algorytm zachłanny, wydawanie reszty

#include <iostream>

using namespace std;

int main(){
	float denominations[] = {20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1}; //given in "grosze"
	int amount[14];
	float restZl;
	for (int i=0; i<14; i++){
		amount[i]=0;
	}

	cout<<"How much cash is to be given back: ";
	cin>>restZl;

	int rest = int (restZl * 100);
	int a;
	int i=0;
	
	while (rest>0){
		a = rest / denominations[i];
		rest -= a * denominations[i];
		amount[i]=a;
		i++;
	}
	cout<<"The cashier has to give following currencies: "<<endl;
	for (int i=0; i<14; i++){
		if (amount[i]!=0)
			cout<<amount[i]<<" times the currency with value "<<denominations[i]/100<<" zl."<<endl;
	}

	return 0;
}