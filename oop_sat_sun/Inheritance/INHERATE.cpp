#include<iostream>
using namespace std;


class Teacher{
	private :
		int age,id;
		string name;
		
	public :
		void show(){
			cout<<"Enter Teacher name : ";cin>>name;fflush(stdin);cin.clear();
			cout<<"Enter Teacher id : ";cin>>id;
			cout<<"Enter Teacher age : ";cin>>age;
			cout<<"Name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"age : "<<age<<endl;
		}
};


int main(){
	Teacher ob;
	ob.show();
}
	