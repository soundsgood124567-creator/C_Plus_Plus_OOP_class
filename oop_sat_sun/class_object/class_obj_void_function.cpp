#include<iostream>
#include <iomanip>
#include<conio.h>
using namespace std;


class Employee{
	public:
		int id, age , search_id;
		string name, gender, search_name;
		float hour, range, total_payment;
		
		void input(){
			cout<<"Enter employee id :";cin>>id;
			fflush(stdin);cin.clear();
			cout<<"Enter employee name :";cin>>name;
			fflush(stdin);cin.clear();
			cout<<"Enter employee gender :";cin>>gender;
			fflush(stdin);cin.clear();
			cout<<"Enter employee age :";cin>>age;
			fflush(stdin);cin.clear();
			cout<<"Enter employee hour :";cin>>hour;
			fflush(stdin);cin.clear();
			cout<<"Enter employee range $:";cin>>range;
			fflush(stdin);cin.clear();
			
			total_payment = hour*range;
			
			cout<<"Total payment :"<<total_payment<<endl;
			cout<<"Please Press [Enter Key ] to show output "<<endl;
		}
		void show(){
			cout<<left<<setw(20)<<"Employee ID "<<setw(20)<<" Employee Name "<<
			setw(20)<<"Employee gender"<<setw(20)<<"Employee age "<<setw(20)<<"Employee Hour "<<
			setw(20)<<"Employee Range "<<endl;
			cout<<left<<setw(20)<<id<<setw(20)<<name<<
			setw(20)<<gender<<setw(20)<<age<<setw(20)<<hour<<
			setw(20)<<range<<endl;
		}
		void search (){
			cout<<"Enter employee id to search :";cin>>search_id;
			fflush(stdin);cin.clear();
			if(search_id == id){
			getch();
			system("cls");
				show();
			}
		}
		void search_by_name (){
			cout<<"Enter employee name to search :";cin>>search_name;
			fflush(stdin);cin.clear();
			if(search_name == name){
			getch();
			system("cls");
			show();
			}
		}
};





int main (){
	
	Employee em;
	em.input();
	getch();
	system("cls");
	em.show();
	em.search();
	em.search_by_name();
	
	
	

	
	
	
	
	return 0;
}