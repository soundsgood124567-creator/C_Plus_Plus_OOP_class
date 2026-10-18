#include<iostream>
using namespace std;

class Student{
	private :
		int score;
		public:
			void setscore(int s){
				if(s>= 0 && s<=100){
					score = s;	
					cout<<"score : "<<score<<endl;

				}
				else{
					cout<<"rejected."<<endl;
				}
				
			}
};

int main (){
	Student a;
	a.setscore(110);
}