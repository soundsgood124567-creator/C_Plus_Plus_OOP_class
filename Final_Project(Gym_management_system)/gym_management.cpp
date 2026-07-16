#include <iostream>
#include <fstream>
using namespace std;
string user_name = "jason";
string create_username, create_gender, create_coach, create_name,shift;
int password = 1234;
int vipornormal, create_password, vip_card, create_id;

void login (){

cout<<"Enter username :";
cin>>user_name;
fflush(stdin);cin.clear();
if (user_name == "jason"){
    cout<<"Enter password :";   
    cin>>password;
    fflush(stdin);cin.clear();
	if(password == 1234){
		cout<<"login seccessfully"<<endl;
	}
	else{
		cout<<"Wrong username or password.";
		
	}
}
else {
    cout<<"Wrong username or password.";
}
}
void vip_add(){
	ofstream vip ("vipfile.txt");
	cout<<"Enter name :";
	cin>>create_username;
	fflush(stdin);cin.clear();
	cout<<"Enter password :";
	cin>>create_password;
	fflush(stdin);cin.clear();
	cout<<"Ereate seccessfully"<<endl;
	cout<<"Enter your name :";
	cin>>create_name;
	fflush(stdin);cin.clear();
	cout<<"Enter id :";
	cin>>create_id;
	fflush(stdin);cin.clear();
	cout<<"Enter coach name :";
	cin>>create_coach;
	fflush(stdin);cin.clear();
	// cout<<"enter VIP card number :";
	// cin>>vip_card;
	fflush(stdin);cin.clear();
	cout<<"Enter shift (moring, afternoon, evening etc) :";
	cin>>shift;
	fflush(stdin);cin.clear();
	cout<<"Create seccessfully";
	vip<<create_username<<create_password<<create_name<<create_id<<create_gender<<create_coach<<shift;
	// <<vip_card
}
void VIP (){
	cout<<"1. Add customer"<<endl;
	cout<<"2. Show customer"<<endl;
	cout<<"3. Update customer"<<endl;
	cout<<"4. Delete customer"<<endl;
	cout<<"5. Search customer"<<endl;
	cout<<"Please choose one option :";
	cin>>vipornormal;
	switch (vipornormal){
		case 1:
			vip_add();
			break;
		case 2:
			cout<<"read";
			break;
		case 3:
			cout<<"update";
			break;
		case 4:
			cout<<"delete";
			break;
		case 5:
			cout<<"search";
			break;

			

	}
}


void vip_read(){
	ifstream vip("vipfile");
	cout<<"VIP member list"<<endl;
	cout<<"VIP name \t\t VIP id \t\t VIP gender \t\t VIP's coach \t\t VIP time"<<endl;
}
	
int main (){
	
	
	login();	
	cout<<"==========meun=========="<<endl;
	cout<<"1. VIP customer"<<endl;
	cout<<"2. Normal customer"<<endl;
	cout<<"Please choose one option :";
	cin>>vipornormal;
	switch (vipornormal){
		case 1:
		VIP(); 
		break ;
			
	}


	return 0;
}
	
	
	
		