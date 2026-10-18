#include<iostream>
using namespace std;


class Bankacc{
	private :
		double bal;
		
		public:
			Bankacc(){
				bal = 0;
				
			}
			
			void desposit(double amount){
				if (amount > 0){
					bal += amount;
					cout<<"deposit : $ "<<bal<<endl;
				}
				else cout<<"rejected , deposit must be positive  "<<endl;
			}
			
			void withdraw(double amount){
				if(amount <= 0 ){
					cout<<"rejected, withdraw must be bigger than 0 "<<endl;
				}else if (amount < bal){
					bal -= amount;
					cout<<"withdrawed : $ "<<bal<<endl;
				}
				
				else cout<<"rejected , withdraw must be bigger than balance "<<endl;
			}
};





int main (){
	Bankacc a;
	a.desposit(123);
	a.withdraw(-1);
}