//#include<iostream>
//using namespace std;
//
//
//
//class Student{
//	public:
//		string name,gender;
//		float id, age;
//		
//		
//		
//		Student(){
//			
//			cout<<"Enter student id :";cin>>id;
//			cout<<"Enter student name :";cin>>name;
//			cout<<"Enter student gender :";cin>>gender;
//			cout<<"Enter student age :";cin>>age;
//			
//		}
//};
//int main(){
//	
//	
//	
////	
//	Student o;
//	
//	
//	
//	return 0;
//}



#include<iostream>
using namespace std;


class Student {
	
	public:
		string name,gender;
		float age,grade,id;
		
		
		
		Student(string n,string g, float a, float gr, float i){
			name = n;
			gender = g;
			age = a;
			grade = gr;
			id = i; 
		}
		
		void show(){
			cout<<"name : "<<name<<", id: "<<id<<", gender: "<<gender<<", age: "<<age<<", grade :"<<grade<<endl;
		}
};




int main(){
	string name,gender;
	float age,grade,id;
	
	
	Student stu(name , gender , age , grade , id ); 
	

		cout<<"Enter name : ";cin>>name;
		cout<<"Enter id : ";cin>>id;
		cout<<"Enter gender : ";cin>>gender;
		cout<<"Enter age : ";cin>>age;
		cout<<"Enter grade : ";cin>>grade;
	
	stu.show();
	
}
	




