#include<iostream>
using namespace std;


class Person{
	public:
		int id, age;
		string name, gender, position;
		
		
		void input_person(){
			cout<<"Enter id : ";cin>>id;fflush(stdin);cin.clear();
			cout<<"Enter name : ";cin>>name;fflush(stdin);cin.clear();
			cout<<"Enter age : ";cin>>age;fflush(stdin);cin.clear();
			cout<<"Enter gender : ";cin>>gender;fflush(stdin);cin.clear();
			cout<<"Enter position : ";cin>>position;fflush(stdin);cin.clear();
		}
		
		void show_person(){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Position : "<<position<<endl;
		}
		
};

class Manger: public Person {
	public:
	int year_exp,salary;
	string shift;
	
	
	void input_manager() {
		input_person();
		cout<<"Enter year of exp : ";cin>>year_exp;fflush(stdin);cin.clear();
		cout<<"Enter year of salary : ";cin>>salary;fflush(stdin);cin.clear();
		cout<<"Enter year of shift : ";cin>>shift;fflush(stdin);cin.clear();
	
}
	
	void show_manager (){
		show_person();
		cout<<"Year of exp : "<<year_exp<<endl;
		cout<<"Year of salary : "<<salary<<endl;
		cout<<"Year of shift : "<<shift<<endl;
		
	} 
	
};

class Employee: public Person{
	public:
		int em_salary;
		string deparment;
		
		
		void input_employee(){
			input_person();
			cout<<"Enter salary : ";cin>>em_salary;fflush(stdin);cin.clear();
			cout<<"Enter deparment : ";cin>>deparment;fflush(stdin);cin.clear();
		}
		
		void show_employee(){
			show_person();
			cout<<"Employee salary : "<<em_salary<<endl;
			cout<<"deparment : "<<deparment<<endl;
		}
};


class Intern : public Person{
	public:
	int probtion, floor, in_salary;
	
	
	
	
	void input_intern() {
	
	input_person();
	cout<<"Enter probtion : ";cin>>probtion;fflush(stdin);cin.clear();
	cout<<"Enter floor : ";cin>>floor;fflush(stdin);cin.clear();
	cout<<"Enter salary : ";cin>>in_salary;fflush(stdin);cin.clear();
	
	}
	void show_intern (){
		show_person();
		cout<<"Enter probtion : "<<probtion<<endl;
		cout<<"Enter floor : "<<floor<<endl;
		cout<<"Enter salary : "<<in_salary<<endl;
	}
};









int main(){
	Manger m;
	m.input_manager();
	m.show_manager();
	Employee e;
	e.input_employee();
	e.show_employee();
	Intern i;
	i.input_intern();
	i.show_intern();
}
