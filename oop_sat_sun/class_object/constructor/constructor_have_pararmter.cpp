#include<iostream>
using namespace std;


class Student {
	public:
		int age;
		string name;
		
		Student(int age, string name){
		
		this -> name = name;
		this -> age = age;
			
		}
		
		void Show(){
			cout<<"Age : "<<age<<endl;
			cout<<"name : "<<name<<endl;
			
			cout<<"enter pl"
		}
		};
		





int main(){
	string name;
	int age;
	
	
	cout<<"Enter age : ";cin>>age;fflush(stdin);cin.clear();
	cout<<"Enter name : ";cin>>name;fflush(stdin);cin.clear();

	
	
	
	Student a(age,name);
	a.Show();
}


