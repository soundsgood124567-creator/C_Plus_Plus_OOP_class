//#include<iostream>
//using namespace std;
//
//class Student {
//	private  : 
//	string name;
//	int id;
//	
//	public :
//		Student (string n,int i){
//			name = n;
//			id = i;
//			cout<<"paremeter consturctor"<<endl;
//		}
//	
//		Student (const Student& other){
//			name = other.name;
//			id = other.id;
//			cout<<"copy constructor"<<endl;
//		}
//		void show(){
//			cout<<"name : "<<name<<endl;
//			cout<<"id : "<<id<<endl;
//	
//		}
//};
//
//
//int  main(){
//	Student n("jason",1213);
//	n.show();
//	
//	Student st = n;
//	st.show();
//}


#include<iostream>
using namespace std;


class Animal{
	public :
		void show(){
			cout<<"animal is eatting "<<endl;
		}
		
		
};
class Cat : public Animal{
	public:
		void cat (){
			cout <<"cat"<<endl;
		}
};




the th
int main(){
	Cat t;
	t. show();
	t.	cat();
}






















