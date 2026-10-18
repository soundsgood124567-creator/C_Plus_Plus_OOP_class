#include<iostream>
using namespace std;

class student {
	
	private :
		string name;
		int mathscore;
		int englishScore;
		
		public :
			void setname(string n){
				name = n;
			}
			
			void setmath(int s){
				if (s>= 0 && s<= 100){
					mathscore = s;
					
				}
				else {
					cout<<"rejected, math score must be bigger than 0 and smaller or equal than 100."<<endl;
					mathscore = 0;
				}
			}
			
			void seteng(int e) {
				if (e >= 0 && e<= 100){
					englishScore = e;
			}
				else {
					cout<<"rejected, english score must be bigger than 0 and smaller or equal to 100. " <<endl;
				}
			}
			
			void output(){
				
				int total;
				double avg;
				total = mathscore+englishScore;
				avg = total /2;
				
				cout<<" Name : "<<name<<endl;
				cout<<" math score : "<<mathscore<<endl;
				cout<<" english Score : "<<englishScore<<endl;
				cout<<" total : "<<total<<endl;
				cout<<" avg : "<<avg<<endl;
			}
};


int main (){
	student s;
	string name;
	int mathscore;
	int englishScore;
	cout<<"Enter name : ";cin>>name;
	s.setname(name);
	cout<<"Enter  math score : ";cin>>mathscore;
	s.setmath(mathscore);
	cout<<"Enter english Score : ";cin>>englishScore;
	s.seteng(englishScore);

	s.output();

}