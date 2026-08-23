////#include<iostream>
////using namespace std;
////
////
////class Me{
////	public:
////		int age;
////		string name;
////		
////		
////		
////		Me(){
////			age = 12;
////			name = "jason";
////		}
////};
////
////int main (){
////	
////	Me f;
////	cout<<"name :"<<f.name<<endl;
////	cout<<"age :"<<f.age;
////	
////	
////	
////	
////	return 0;
////}
//
//






//
//#include<iostream>
//using namespace std;
//
//class Student{
//	public:
//		int id, age;
//		string name, gender, grade;
//		
//		
//		
//		
//		Student(){
//			id = 13;
//			age = 14;
//			name = "Jason";
//			gender = "Male";
//			grade = "A++";
//			
//			
//			
//		}
//		
//		void show (){
//				
//				cout<< "id :"<<id<<endl;
//				cout<< "name :"<<name<<endl;
//				cout<< "gender :"<<gender<<endl;
//				cout<< "grade :"<<grade<<endl;
//			}
//};
//
//
//
//
//
//
//
//int main (){
//	
//	Student stu;
//	stu.show();
//	
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Bankaccount{
//	public:
//	string accountname;
//	double bal,amount;
//	
//	
//	
//	Bankaccount(){
//		cout<<"Enter accout name :";cin>>accountname;
//		fflush(stdin);cin.clear();
//		cout<<"Enter balance : $";cin>>bal;
//		fflush(stdin);cin.clear();
//	}	
//	void deposite(){
//		cout<<"Enter depostie amount : $";cin>>amount;
//		fflush(stdin);cin.clear();
//		if(amount <=0 ){
//			cout<<"invalid amount"<<endl;
//		}
//		else{
//			bal += amount;
//			cout<<"current balance : $"<<bal<<endl;
//		}
//	}
//	
//	void withdraw(){
//		cout<<"Enter with draw amount : $";cin>>amount;
//		fflush(stdin);cin.clear();
//		if(amount <= 0){
//			cout<<"invalid amount"<<endl;
//		}
//		else{
//			bal -= amount;
//			cout<<"Current balance : $"<<bal<<endl;
//		}
//	}
//	
//};
//
//
//int main(){
//	
//	
//	Bankaccount bank;
//	bank.deposite();
//	bank.withdraw();
//	
//	
//	return 0;
//}






#include<iostream>
#include<conio.h>
using namespace std;

class Employee{
	public:
		string em_name,em_gender,em_position,temp_name,temp_gender,temp_position;
		float em_age,em_salary,em_id, search_id,update_id;
		int ch;
		bool found = false;
		
		Employee(){
			cout<<"Enter employee id :";cin>>em_id;fflush(stdin);cin.clear();
			cout<<"Enter employee name :";cin>>em_name;fflush(stdin);cin.clear();
			cout<<"Enter employee age :";cin>>em_age;fflush(stdin);cin.clear();
			cout<<"Enter employee gender :";cin>>em_gender;fflush(stdin);cin.clear();
			cout<<"Enter employee position :";cin>>em_position;fflush(stdin);cin.clear();
			cout<<"Enter employee salary :";cin>>em_salary;fflush(stdin);cin.clear();
			
		}
		void show (){
			getch();
			system("cls");
			cout<<"employee id : "<<em_id<<endl;
			cout<<"employee name : "<<em_name<<endl;
			cout<<"employee age : "<<em_age<<endl;
			cout<<"employee gender : "<<em_gender<<endl;
			cout<<"employee position : "<<em_position<<endl;
			cout<<"employee salary : "<<em_salary<<endl;
		}
		void search(){
			getch();
			system("cls");
			cout<<"Enter employee id to search :";cin>>search_id;
			if(search_id == em_id){
				show();
				found = true;
			}
			if(!found){
				getch();
			system("cls");
				cout<<"Employee id not found."<<endl;
			}
		}
		void update(){
			getch();
			system("cls");
			cout<<"Enter employee to update : ";cin>>update_id;fflush(stdin);cin.clear();
			if(update_id == em_id){
				cout<<"Enter employee id :";cin>>em_id;fflush(stdin);cin.clear();
				cout<<"Enter employee name :";cin>>em_name;fflush(stdin);cin.clear();
				cout<<"Enter employee age :";cin>>em_age;fflush(stdin);cin.clear();
				cout<<"Enter employee gender :";cin>>em_gender;fflush(stdin);cin.clear();
				cout<<"Enter employee position :";cin>>em_position;fflush(stdin);cin.clear();
				cout<<"Enter employee salary :";cin>>em_salary;fflush(stdin);cin.clear();
				found = true;
				show();
			
			}
			if(!found){
				getch();
			system("cls");
					cout<<"Employee id not found."<<endl;
			}
		}
		
};





Employee em;

int main(){
	int ch;
//	Employee em;
	cout<<"welcome to the employee system"<<endl;
	cout<<"1. Add employee"<<endl;
	cout<<"2. Show employee"<<endl;
	cout<<"3. Update employee"<<endl;
	cout<<"4. exit"<<endl;
	cout<<"Please enter 1 option :";cin>>ch;
	switch(ch){
		case 1:{
//		Employee em;
			break;
		}
		case 2:{
			em.show();
			break;
		}
		case 3:{
			em.update();
			break;
		}
	}
	
	
	
	return 0;
}













