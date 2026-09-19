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


class Job{
	protected:
		int id;
		string position,shift;
		
		void inputjob(){
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter shift : ";cin>>shift; 
		}
};