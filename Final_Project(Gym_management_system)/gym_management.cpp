#include <iostream>
#include <fstream>
#include <iomanip>
#include<conio.h>
using namespace std;
string user_name = "jason";
string create_username, create_gender, create_coach, create_name,shift, search_name,update_name,new_coach,new_name,new_shift;
int password = 1234;
int vipornormal, create_password, vip_card, create_id, search_id, id_name, update_id, new_id,new_card_number,update_id_name;

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
    exit;
    
  }
}
else {
    cout<<"Wrong username or password.";
    exit;
}
}
void vip_add(){
  ofstream vip("vipfile.txt",ios::app);
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
   cout<<"enter VIP card number :";
   cin>>vip_card;
  fflush(stdin);cin.clear();
  cout<<"Enter shift (moring, afternoon, evening etc) :";
  cin>>shift;
  fflush(stdin);cin.clear();
  cout<<"Create seccessfully";
    vip << create_id << " " << create_name << " " << create_coach << " " << shift << "\n";
    vip.close();
}
void vip_read(){
      ifstream vip("vipfile.txt");
  while (vip>>create_id>>create_name>>create_coach>>shift){
      cout<<"VIP member list"<<endl;
      cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
      setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<setw<<"Card number "<<endl;
      cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
      setw(20)<<create_coach<<setw(20)<<shift<<setw(20)<<vip_card<<endl;
      vip.close();
  }
  vip.close();
}

void search_use_id(){
  ifstream vip("vipfile.txt");
  cout<<"Enter VIP ID to search :";cin>>search_id;
  fflush(stdin);cin.clear();
  while(vip>>create_id>>create_name>>create_coach>>shift){
    if(search_id == create_id){
      cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
      setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<endl;
      cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
      setw(20)<<create_coach<<setw(20)<<setw(20)<<endl;
    }
  }
  vip.close();

}




void search_use_name(){
  ifstream vip("vipfile.txt");
  cout<<"Enter VIP username to search :";cin>>search_name;
  fflush(stdin);cin.clear();
  while(vip>>create_id>>create_name>>create_coach>>shift){
    if(search_name == create_username){
      cout<<left<<setw(20)<<"VIP ID "<<setw(20)<<" VIP Name "<<
      setw(20)<<"VIP coach"<<setw(20)<<"VIP shift "<<endl;
      cout<<left<<setw(20)<<create_id<<setw(20)<<create_name<<
      setw(20)<<create_coach<<setw(20)<<setw(20)<<endl;
    }
  }
    vip.close();

}


void update_by_id(){
  ifstream vip("vipfile.txt");
  ofstream temp("temp.txt");
  cout<<"Enter VIP ID to update :";cin>>update_id;
  fflush(stdin);cin.clear();
  while(vip>>create_id>>create_name>>create_coach>>shift>>vip_card){
    if(update_id == create_id){
	    cout<<"Enter new id :";cin>>new_id;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new name :";cin>>new_name;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new coach :";cin>>new_coach;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new shift :";cin>>new_shift;
	  	fflush(stdin);cin.clear();
	    cout<<"Enter new card number :";cin>>new_card_number;
	  	fflush(stdin);cin.clear();


    }else{
      cout<<"Wrong id.";
    }
    temp<<new_id<<" "<<new_name<<" "<<new_coach<<" "<<new_shift<<" "<<new_card_number;
  
  }
   
  vip.close();
  temp.close();
  remove("vipfile.txt");
   rename("temp.txt", "vipfile.txt");
}
void update_by_name(){
  ifstream vip("vipfile.txt");
  ofstream temp("temp.txt");
  cout<<"Enter VIP name to update :";cin>>update_name;
  fflush(stdin);cin.clear();
    while(vip>>create_id>>create_name>>create_coach>>shift){
    if(update_name == create_name){
	    cout<<"Enter new id :";cin>>new_id;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new name :";cin>>new_name;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new coach :";cin>>new_coach;
	    fflush(stdin);cin.clear();
	    cout<<"Enter new shift :";cin>>new_shift;
	  	fflush(stdin);cin.clear();
	    cout<<"Enter new card number :";cin>>new_card_number;
	  	fflush(stdin);cin.clear();
	

    }
    else{
    	cout<<"wrong name";
	}
	    temp<<new_id<<" "<<new_name<<" "<<new_coach<<" "<<new_shift<<" "<<new_card_number;

  }
   
  vip.close();
  temp.close();
  remove("vipfile.txt");
   rename("temp.txt", "vipfile.txt");
}



void VIP() {

    while (true) {
        cout << "\n1. Add customer" << endl;
        cout << "2. Show customer" << endl;
        cout << "3. Search customer" << endl;
        cout << "4. Delete customer" << endl;
        cout << "5. Update customer" << endl;
        cout << "6. Exit" << endl;
        cout << "Please choose one option: ";
        cin >> vipornormal;
        switch (vipornormal) {
            case 1:
              getch();
              system("cls");
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
                switch (id_name){
                  case 1:{
                    search_use_id();
            break;
          }
          case 2:{
            search_use_name();
            break;
          }
        }
                break;

            case 4:
                cout << "Delete";
                break;

            case 5:
                cout <<"1. Update by id";
                cout <<"2. Update by name";
                 cout << "Please choose one option: ";cin>>update_id_name;
                   switch(update_id_name){
                     case 1:{
                       update_by_id();
              break;
             }
             case 2:{
               update_by_name();
              break;
             }
           }
         
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
