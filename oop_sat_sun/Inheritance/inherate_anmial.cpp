#include<iostream>
using namespace std;








class Animal{
	public:
		void eat (){
			cout<<"animals is eating"<<endl;
		}
		void sleeping(){
			cout<<"animals is sleeping "<<endl;
		}
		void running(){
			cout<<"animals is running"<<endl;
		}
		void walking(){
			cout<<"animals is walking"<<endl;
		}
};

class Dog :public Animal{
	public:
	void bark(){
		cout<<"The dog is barking"<<endl;
	}
};

class Cat :public Animal{
	public:
	void meow(){
		cout<<"Cat  is meowing"<<endl;	
	}

};




int main(){
 Dog a;
 a.eat();
 a.running();
 a.sleeping();
 a.walking();
 a.bark();
 Cat q;
 q.eat();
 q.running();
 q.sleeping();
 q.walking();
 q.meow() ;}