#include<iostream>
using namespace std;


class Person{
	protected:
		string name, gender,postition;
		int age;
		
		
	public:
		void inputperson(){
			cout<<"Enter name : ";cin>>name;
			cout<<"Enter gender : ";cin>>gender;
			cout<<"Enter age : ";cin>>age;
			cout<<"Enter postition : ";cin>>postition;
			
			
		}
		void outputperson(){
			cout<<"Name : "<<name<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"postition : "<<postition<<endl;
		}
};

class Stdent :public Person{
	public:
		int id,grade;
		string goal;
		
		
		
		void inputstdent(){
			inputperson();
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter goal : ";cin>>goal;
			cout<<"Enter grade : ";cin>>grade;
			
		}
		void outputstdent(){
			outputperson();
			cout<<"id : "<<id<<endl;
			cout<<"goal : "<<goal<<endl;
			cout<<"grade : "<<grade<<endl;
		}
		
};


class Teacher{
	public:
		int teacher_id;
		string subjecct,exp;
		
		
		void inputteacher(){	
		inputperson();
		cout<<"Enter teacher_id : ";cin>>teacher_id;
		cout<<"Enter subject : ";cin>>subjecct;
		cout<<"Enter exprenece : ";cin>>exp;
	}
	void outputteacher(){
		outputperson();
		cout<<"teacher_id : "<<teacher_id<<endl;
		cout<<"subject : "<<subject<<endl;
		cout<<"exprenece : "<<exp<<endl;
	}
		
		
		
};


int main(){

	Stdent s;
	s.inputstdent();
	s.outputstdent();
	Teacher t;
	t.inputteacher();
	t.outputteacher();
	return 0;
}



