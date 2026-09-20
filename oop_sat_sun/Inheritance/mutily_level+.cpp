#include<iostream>
using namespace std;


class Person{
	protected: 
	string name,gender;
	int id, age;
	
	public:
		void in_person(){
			cout<<"Enter name : ";cin>>name;
			cout<<"Enter gender : ";cin>>gender;
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter age : ";cin>>age;
		}
		
		
		void show_person(){
			cout<<"Name : "<<name<<endl;
			cout<<"gender : "<<gender<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"age : "<<age<<endl;
			
		}
};

class Employee :virtual public Person{
	protected :
		int salary,xp;
		string shift;
		
		public:
			
			void in_em(){
				in_person();
				cout<<"Enter salary : ";cin>>salary;
				cout<<"Enter xp : ";cin>>xp;
				cout<<"Enter shift : ";cin>>shift;
			}
			
			void show_em(){
				show_person();
				cout<<"salary : "<<salary<<endl;
				cout<<"xp : "<<xp<<endl;
				cout<<"shift : "<<shift<<endl;
			}
		
};

class Student :virtual public Person{
	protected :
		string school;
		int grade, gpa, level;
		
		public:
			void in_stu(){
				in_person();
				cout<<"Enter school : ";cin>>school;
				cout<<"Enter grade : ";cin>>grade;
				cout<<"Enter gpa : ";cin>>gpa;
				cout<<"Enter level : ";cin>>level;
			}
			
			
			void show_stu(){
				show_person();
				cout<<"school : "<<school<<endl;
				cout<<"grade : "<<grade<<endl;
				cout<<"gpa : "<<gpa<<endl;
				cout<<"level : "<<level<<endl;
			}
};


class Manger : public Employee , Student{
	public:
	string deparment;
	int floor;
	
	void in_man(){
		in_em();
		in_stu();
		cout<<"Enter deparment : ";cin>>deparment;
		cout<<"Enter floor : ";cin>>floor;
		
	}
	
	
	void show_man(){
		show_em();
		show_stu();
		cout<<"deparment : "<<deparment<<endl;
		cout<<"floor : "<<floor<<endl;
	}
};


int main (){
	Manger s;
	s.in_man();
	s.show_man();

	
	return 0;
}