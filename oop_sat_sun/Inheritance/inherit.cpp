#include<iostream>
 using namespace std;
 
 
class Parent{
	protected:
		int id;
		string name;
		int age;
	
	
	public:
		void setParent(int i, string n,int a){
			id = i;
			name = n;
			age = a;
		}
		void show_parent(){
			cout<<"id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
		}
};


class Child : public Parent{
	public:
		string child_class;
	void setChild(i , n , a ){
		setParent(i,n,a);
		child_class = c;
	}
	void showclass(){
		show_parent();
		cout<<"class : "<<child_class<<endl;
	}
};




int main(){
	
	Child ch;
	ch.setChild(12,"jason",12,"2");
	ch.showclass();
		
}