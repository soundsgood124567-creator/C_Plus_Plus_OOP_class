#include<iostream>
using namespace std;


class Person{
	protected:
	string name,gender;
	int exp, age;
	
	void inputperson(){
		cout<<"Enter age : ";cin>>age;
		cout<<"Enter name : ";cin>>name;
		cout<<"Enter gender : ";cin>>gender;
		cout<<" year of experince : ";cin>>exp;
		
	}
	
	void outputperson(){
		cout<<"age : "<<age<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Gender : "<<gender<<endl;
		cout<<" year of experince : "<<exp<<endl;
	}
};


class Rule{
	protected:
		int id;
		string position,shift;
		
		void inputjob(){
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter shift : ";cin>>shift; 
		}
		void outputjob(){
			cout<<"Enter id : "<<id;
			cout<<"Enter shift : "<<shift; 
		}
		
};

class Teacher : public Person,Rule{
	public:
		
		void show_teacher(){
			inputperson();
			outputperson();
			inputjob();
			outputjob();
		}
		
};
class Student : public Person, Rule{
	public:
		
		void show_student(){
			inputperson();
			outputperson();
			inputjob();
			outputjob();
		}
};




int main(){
	Teacher t;
	t.show_teacher();
	Student s;
	s.show_student() ;
}