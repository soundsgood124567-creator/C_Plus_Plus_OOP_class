#include<iostream>
using namespace std;


class Person{
	public:
		int id, age;
		string name, gender;
		
		void input_person(){
			cout<<"Enter id : ";cin>>id;fflush(stdin);cin.clear();
			cout<<"Enter name : ";cin>>name;fflush(stdin);cin.clear();
			cout<<"Enter age : ";cin>>age;fflush(stdin);cin.clear();
			cout<<"Enter gender : ";cin>>gender;fflush(stdin);cin.clear();
	}
		
		void show_person(){
			cout<<"ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
				}
};


int main(){
	Person p;
	
	p.input_person();
	p.show_person();
}