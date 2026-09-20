#include<iostream>
using namespace std;


class Person{
	protected:
		int id, age;
		string name, gender;
		
	public:
		Person(){
		}
		
		void in_person(){
			cout<<"Enter id : ";cin>>id;
			cout<<"Enter name : ";cin>>name;
			cout<<"Enter age : ";cin>>age;
			cout<<"Enter gender : ";cin>>gender;
		}
		
		void show_person(){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
		}
};


class Student : public Person{
	protected:
		int grade, level;
		
	public:
		Student(){
		}
		
		void in_student(){
			in_person();
			cout<<"Enter grade : ";cin>>grade;
			cout<<"Enter level : ";cin>>level;
		}
		
		void show_student(){
			show_person();
			cout<<"Grade : "<<grade<<endl;
			cout<<"Level : "<<level<<endl;
		}
};


class Teacher : public Student{
	protected:
		int yearOfExperience;
		
	public:
		Teacher(){
		}
		
		void in_teacher(){
			in_student();
			cout<<"Enter year of experience : ";
			cin>>yearOfExperience;
		}
		
		void show_teacher(){
			show_student();
			cout<<"Year of Experience : "<<yearOfExperience<<endl;
		}
};


class Director : public Teacher{
	protected:
		string schoolName;
		
	public:
		Director(){
		}
		
		void in_director(){
			in_teacher();
			cout<<"Enter school name : ";
			cin>>schoolName;
		}
		
		void show_director(){
			show_teacher();
			cout<<"School Name : "<<schoolName<<endl;
		}
};


int main(){
	
	Director d;
	
	d.in_director();
	
	cout<<endl;
	cout<<"========== DIRECTOR INFORMATION =========="<<endl;
	
	d.show_director();
	
	return 0;
}