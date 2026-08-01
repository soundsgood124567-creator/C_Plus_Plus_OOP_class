#include <iostream>
#include <fstream>
#include <iomanip>
#include<conio.h>
using namespace std;
//vip varible
string user_name = "jason";
string create_username, create_gender, create_coach, create_name,shift, search_name,update_name,new_coach,new_name,new_shift,delete_name;
int password = 1234;
int vipornormal, create_password, vip_card, create_id, search_id, id_name, update_id, new_id,new_card_number,update_id_name,delete_id,del_id_name;
bool found = false;                                                                                                                                                                                               
//normal customer

string create_nor_name,create_nor_gender;
int create_nor_age,create_nor_id,create_nor_card_id;

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
	getch();
	system("cls");
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
	getch();
	system("cls");
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
	getch();
	system("cls");
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
	getch();
	system("cls");
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
  getch();
  system("cls");
  ifstream vip("vipfile.txt");
  ofstream temp("temp.txt");
  cout<<"Enter VIP id to update :";cin>>update_id;
  fflush(stdin);cin.clear();

  found = false;

  while(vip>>create_id>>create_name>>create_coach>>shift){
    if(update_id == create_id){
      found = true;
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

      temp<<new_id<<" "<<new_name<<" "<<new_coach<<" "<<new_shift<<"\n";
    }
    else{
      temp<<create_id<<" "<<create_name<<" "<<create_coach<<" "<<shift<<"\n";
    }
  }

  vip.close();
  temp.close();

  if(found){
    remove("vipfile.txt");
    rename("temp.txt", "vipfile.txt");
    cout<<"Update successfully"<<endl;
  }
  else{
    remove("temp.txt");
    cout<<"ID not found"<<endl;
  }
}



void update_by_name(){
	getch();
	system("cls");
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
        temp<<new_id<<new_name<<new_coach<<new_shift<<new_card_number;

  }
   
  vip.close();
  temp.close();
  remove("vipfile.txt");
   rename("temp.txt", "vipfile.txt");
}



void delete_by_id(){
	getch();
	system("cls");
	ifstream vip("vipfile.txt");
	ofstream del("del.txt");
	cout<<"Enter user id to delete :";cin>>delete_id;
	fflush(stdin);cin.clear();
	while(vip>>create_id>>create_name>>create_coach>>shift>>vip_card){
		if(delete_id == create_id){
			found = true;
			
			del<<create_id<<" "<<create_name<<" "<<create_coach<<" "<<shift<<" "<<endl;
		}
		else{
			cout<<"wrong id"<<endl;
		}
	}
	vip.close();
	del.close();
	remove("vipfile.txt");
	rename("del.txt","vipfile.txt");
}






void delete_by_name(){
	getch();
	system("cls");
	ifstream vip("vipfile.txt");
	ofstream del("del.txt");
	cout<<"Enter user name to delete :";cin>>delete_name;
	fflush(stdin);cin.clear();
	while(vip>>create_id>>create_name>>create_coach>>shift>>vip_card){
		if(delete_name == create_name){
			found = true;
			
			del<<create_id<<" "<<create_name<<" "<<create_coach<<" "<<shift<<" "<<endl;
		}
		else{
			cout<<"wrong name"<<endl;
		}
	}
	vip.close();
	del.close();
	remove("vipfile.txt");
	rename("del.txt","vipfile.txt");
}
void nor_add(){
	getch();
	system("cls");
	ofstream nor("nor.txt");
	cout<<"Enter normal customor id : ";cin>>create_nor_id;fflsuh(stdin);cin.clear();
	cout<<"Enter normal customor id : ";cin>>create_nor_id;fflsuh(stdin);cin.clear();
	cout<<"Enter normal customor id : ";cin>>create_nor_id;fflsuh(stdin);cin.clear();
	cout<<"Enter normal customor id : ";cin>>create_nor_id;fflsuh(stdin);cin.clear();
	cout<<"Enter normal customor id : ";cin>>create_nor_id;fflsuh(stdin);cin.clear();
	
	}



void VIP() {

    while (true) {
    	getch();
		system("cls");
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
            
                cout << "1. Delete by id"<<endl;
                cout << "2. Delete by name"<<endl;
                cout<<"Choose one option :";
                cin>>del_id_name;
                switch(del_id_name){
                	case 1:{
                	
                		delete_by_id();
						break;
					}
					case 2:{
						
						delete_by_name();
						break;
					}
				}
                break;

            case 5:
            	
                cout <<"1. Update by id"<<endl;
                cout <<"2. Update by name"<<endl;
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
