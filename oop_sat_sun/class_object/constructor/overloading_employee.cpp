#include<iostream>
using namespace std;





class Employee {
	string name,gender;
	int  age;
	public:
	Employee(){
		name = "jason";
		age = 12;
		
		cout <<"Emplyee name : " << name << "Age : "<< age << endl;
	}
	Employee(string n, int a){
		name = n ; 
		age = a;
		cout<<"name : "<<name<<" age : "<<age<<endl;
	}
	Employee(string n, string g, int a){
		name = n;
		gender = g;
		age = a;
		
			cout<<"name : "<<name<<"gender : "<<gender<<" age : "<<age;
	}
};

int main(){
	Employee s;
	Employee s1("LoL",11);
	Employee s2("BBB","male",99);
}