#include<iostream>
#include<conio.h>
using namespace std;

void main_meun(){
	
	cout<<"1. Input"<<endl;
	cout<<"2. Display info"<<endl;
	cout<<"3. Exit"<<endl;
}
	
int main_meun_chioce;
float student_id, year_level;
char grade;

int main(){
	do {
		cout<<"welcome to the system"<<endl;
		main_meun();
		cout<<"please choose one option"<<endl;
		cin>>main_meun_chioce;fflush(stdin);cin.clear();
		system("cls");
		
		switch(main_meun_chioce){
			case 1 :{
				cout<<"What is your student ID?: ";
				cin>> student_id; fflush(stdin);cin.clear();
				cout<<"What is your year level?: ";
				cin>>year_level; fflush(stdin);cin.clear();
				cout<<"What is your grade?(A, B, C, D, E, F ): ";
				cin>>grade;
				break;
			}
			case 2 :{
				cout<< "Student ID: "<<student_id<<endl;
				cout << "Year level: "<< year_level<<endl;
				cout<< "Grade: "<< grade<<endl;
				break;
			}
			case 3 :{
				
			
				break;
			}
			
		}
		
	}while(main_meun_chioce !=3);

	return 0;
}