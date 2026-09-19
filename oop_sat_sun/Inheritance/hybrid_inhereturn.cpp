#include<iostream>
#include<conio.h>

using namespace std;


class Person {
	protected:
		int age,id;
		string name,gender;
		
		
		
		
		void inputperson(){
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter name : ";cin>>name;
			cout<<"Enter gender : ";cin>>gender;
			cout<<"Enter age : ";cin>>age;
		}
		
		void outputperson(){
			cout<<"id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Age : "<<age<<endl;
		}
};



class Manager : public Person{
	public :
		
		string position;
		int exp;
		
		
		void inputmanager(){
		
			inputperson();
			cout<<"Enter manager year of experince : ";cin>>exp;
			cout<<"Enter manager position : ";cin>>position;
		}
		
		
		void outputmanager(){
			getch();
			system("cls");
			outputperson();
			cout<<" year of experince : "<<exp<<endl;
			cout<<" position : "<<position<<endl;
		}
};


class Staff : public Manager {
	public :
		int level, salary;
		
		
		
		void inputstaff(){
			getch();
			system("cls");
			inputmanager();
			cout<<"Enter staff level : ";cin>>level;
			cout<<"Enter staff salary : ";cin>>salary;
		}
		
		
		void outputstaff(){
			getch();
			system("cls");
			outputmanager();
			cout<<"level : "<<level;
			cout<<"salary : "<<salary;
		}
};




int main(){
	Manager s;
	s.inputmanager();
	s.outputmanager();
	Staff d;
	d.inputstaff();
	d.outputstaff();
}

















