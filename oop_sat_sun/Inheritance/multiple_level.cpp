#include<iostream>
using namespace std;


class Person{
	protected: 
	string name;
	
	public:
		void in_person(){
			cout<<"Enter name : ";cin>>name;
		}
		
		
		void show_person(){
			cout<<"Name : "<<name<<endl;
			
		}
};



class Employee :virtual public Person{
	protected :
		int salary;
		
		public:
			
			void in_em(){
				in_person();
				cout<<"Enter salary : ";cin>>salary;
			}
			
			void show_em(){
				show_person();
				cout<<"salary : "<<salary<<endl;
			}
		
};

class Student :virtual public Person{
	protected :
		string school;
		
		public:
			void in_stu(){
				in_person();
				cout<<"Enter school : ";cin>>school;
			}
			
			
			void show_stu(){
				show_person();
				cout<<"school : "<<school<<endl;
			}
};








class Manger : public Employee , Student{
	public:
	string deparment;
	
	void in_man(){
		in_em();
		in_stu();
		cout<<"Enter deparment : ";cin>>deparment;
		
	}
	
	
	void show_man(){
		show_em();
		show_stu();
		cout<<"deparment : "<<deparment<<endl;
	}
};


int main (){
	Manger s;
	s.in_man();
	s.show_man();
	
	
	
	
	return 0;
}