#include <iostream>
#include <fstream>
#include <iomanip>
#include<conio.h>
using namespace std;
string user_name = "jason";
string create_username, create_gender, create_coach, create_name,shift, search_name;
int password = 1234;
int vipornormal, create_password, vip_card, create_id, search_id, id_name;

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
	cout<<"Enter username :";
	cin>>create_username;
	fflush(stdin);cin.clear();
	cout<<"Enter password :";
	cin>>create_password;
	fflush(stdin);cin.clear();
	cout<<"Ereate seccessfully"<<endl;
	cout<<"Enter your name(real name) :";
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
void vip_read(){
	ifstream vip("vipfile");
	cout<<"VIP member list"<<endl;
			cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
			setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<endl;
			cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
			setw(20)<<create_coach<<setw(20)<<setw(20)<<endl;
}

void search_use_id(){
	cout<<"Enter VIP ID to search :";cin>>search_id;
	fflush(stdin);cin.clear();
	if(search_id == create_id){
		cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
			setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<endl;
			cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
			setw(20)<<create_coach<<setw(20)<<setw(20)<<endl;
	}
}




void search_use_name(){
	cout<<"Enter VIP username to search :";cin>>search_name;
	fflush(stdin);cin.clear();
	if(search_name == create_username){
		cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
			setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<endl;
			cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
			setw(20)<<create_coach<<setw(20)<<setw(20)<<endl;
	}
}



void VIP() {

    while (true) {
        cout << "1. Add customer" << endl;
        cout << "2. Show customer" << endl;
        cout << "3. Search customer" << endl;
        cout << "4. Delete customer" << endl;
        cout << "5. Update customer" << endl;
        cout << "6. Exit" << endl;
        cout << "Please choose one option: ";
        cin >> vipornormal;

        switch (vipornormal) {
            case 1:
                vip_add();
                break;

            case 2:
                vip_read();
                break;

            case 3:
                cout<<"1. Search by id"<<endl;
                cout<<"2. Search by name"<<endl;
                cin>>id_name;
                fflush(stdin);cin.clear();
                switch (id_name)
                break;

            case 4:
                cout << "Delete";
                break;

            case 5:
                cout << "Update";
                break;

            case 6:
                return;
        }
    }
}



	
int main (){
	
	
	login();	
	cout<<"==========Meun=========="<<endl;
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
	
	
	
		