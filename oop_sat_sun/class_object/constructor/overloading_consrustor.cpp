#include<iostream>
using namespace std;





class Student {
	string name,gender;
	int  age;
	public:
	Student(){
		name = "jason";
		age = 12;
		
		cout <<"student name : " << name << "Age : "<< age << endl;
	}
	Student(string n, int a){
		name = n ; 
		age = a;
		cout<<"name : "<<name<<" age : "<<age<<endl;
	}
	Student(string n, string g, int a){
		name = n;
		gender = g;
		age = a;
			cout<<"name : "<<name<<"gender : "<<gender<<" age : "<<age;
	}
};

int main(){
	Student s;
	Student s1("LoL",11);
	Student s2("BBB","male",99);
}