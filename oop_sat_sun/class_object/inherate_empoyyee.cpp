#include<iostream>
using namespace std;

class employee{
	protected:
	int id;
	int age;
	string name;
	
	public:
		void setemployee(int i, string n, int a){
			id = i;
			name = n;
			age = a;
			
		}
		void show(){
			cout<<"id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
		}
};


class boss : public employee{
	public:
	string workplace;
	cout<"ENTE
	"
	void setboss(int i, string n, int a,string w){
		setemployee(i,n,a );
		workplace = w;
	}
	void showboss(){
		show();
		cout<<"workplace : "<<workplace<<endl;
	}
	
};



int main(){
	boss b;
	b.setboss(1,"jason",13,"aishf");
	b.showboss();
}