#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	int Y=1;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	cout << fixed << setprecision(2); 
	for(Y=1 ; Y>0 ; Y++){
		cout << setw(13) << left << Y; 
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << loan*(rate/100);
	     cout << setw(13) << left << loan+(loan*(rate/100));
		if(loan+(loan*(rate/100)) - pay <= 0){
			cout << setw(13) << left << loan+(loan*(rate/100));
			cout << setw(13) << left << 0.00;
			break;
		}
	   
		cout << setw(13) << left << pay;
	    cout << setw(13) << left << loan+(loan*(rate/100)) - pay;
	    cout << "\n";
		loan = loan+(loan*(rate/100)) - pay;
	}
		
	
	return 0;
}
