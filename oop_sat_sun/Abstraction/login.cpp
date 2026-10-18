#include<iostream>
using namespace std;


class Login {
	private : 
		int password = 1234;
		string name = "jason";
		
		public :
			
			void login (){
				cout<<"Enter username : "; cin>>name;
				if (name == "jason"){
					cout<<"Enter password : "; cin>>password;
					if(password == 1234){
						cout<<"logined"<<endl;
					}
					else {
					cout<<"wrong password or user name."<<endl;
			}
				}
				else {
					cout<<"wrong password or user name."<<endl;
				}
			}
};

int main (){
	Login a;
	a.login();
}