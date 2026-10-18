#include<iostream>
using namespace std;

class Bankacc{
	private :
		double bal;
		
	public:
		Bankacc(){
			bal = 0;
		}
		
		void deposit(double amount){
			if (amount > 0){
				bal += amount;
				cout<<"deposited, $"<<amount<<endl;
			}
			else {
				cout<<"rejected , deposit amount must be positive."<<endl;
			}
		}
		
		void withdraw( double amount){
			if (amount <= bal && amount>0){
				bal -= amount;
				cout<<"withdrawed $"<<amount<<endl;
			}
			else {
				cout<<"rejected , withdraw amount must be smaller or euqal to balance."<<endl;
			}
		}
		
		double getbal(){
			return bal;
		}
};



int main (){
	Bankacc a;
	double amount;
	
	cout<<"Enter deposit amount : ";cin>>amount;
	a.deposit(amount);
	cout<<"Enter withdraw amount : ";cin>>amount;
	a.withdraw(amount);
}