#include <iostream>
using namespace std;
string user_name = "jason";
string create_username ;
int password = 1234;
int vipornormal;
void login (){

cout<<"enter username :";
cin>>user_name;
fflush(stdin);cin.clear();
if (user_name == "jason"){
    cout<<"Enter password :";   
    cin>>password;
    fflush(stdin);cin.clear();
	if(password == 1234){
		cout<<"login seccessfully";
	}
	else{
		cout<<"Wrong username or password.";
		
	}

}
else {
    cout<<"Wrong username or password.";
}


}
}


void VIP (){
	cout<<"1. create"<<endl;
	cout<<"2. read"<<endl;
	cout<<"3. update"<<endl;
	cout<<"4. delete"<<endl;
	cout<<"5. search"<<endl;
	cout<<"please choose one option :";
	cin>>vipornormal;
	switch (vipornormal){
		case 1:
			cout<<"create";
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
		default:
			cout<<"wrong input";

			

	}
}




vip_create(){
	cout<<"enter name :";
	cin>>user_name;
	fflush(stdin);cin.clear();
	cout<<"enter password :";
	cin>>password;
	fflush(stdin);cin.clear();
	cout<<"create seccessfully";
}
	
	
	
	
	
int main (){
	
	
	login();	
	cout<<"==========meun==========";
	cout<<"1. VIP customer"<<endl;
	cout<<"2. normal customer"<<endl;


	return 0;
}
	
	
	
	
	
	
	