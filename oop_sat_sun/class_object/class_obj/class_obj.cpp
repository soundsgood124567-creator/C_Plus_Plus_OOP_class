#include<iostream>
#include <iomanip>
using namespace std;

class student{
	public:
		int stu_id,stu_age;
		float math_score, english_score,khmer_score,search_id;
		string stu_name;
		
		void add(){
			cout<<"Enter student name :";cin>>stu_name;
			fflush(stdin);cin.clear();
			cout<<"Enter student id :";cin>>stu_id;
			fflush(stdin);cin.clear();
			cout<<"Enter student age :";cin>>stu_age;
			fflush(stdin);cin.clear();
			cout<<"Enter student math score :";cin>>math_score;
			fflush(stdin);cin.clear();
			cout<<"Enter student Engilsh :";cin>>english_score;
			fflush(stdin);cin.clear();
			cout<<"Enter student khmer :";cin>>khmer_score;
			fflush(stdin);cin.clear();
			
		}
		void show(){
			cout<<"student list"<<endl;
			cout<<left<<setw(20)<<"student Id"<<setw(20)<<"student name"<<setw(20)<<"student age"<<setw(20)<<"student math score"<<setw(20)<<"student english score"<<setw(20)<<"student khmer score"<<endl;
			cout<<left<<setw(20)<<stu_id<<setw(20)<<stu_name<<setw(20)<<stu_age<<setw(20)<<math_score<<setw(20)<<english_score<<setw(20)<<khmer_score<<endl;
		}
		void search_by_id(){
			cout<<"Enter student id to search :";cin>>search_id;
			fflush(stdin);cin.clear();
			if(search_id == stu_id){
			show();
			}
			else{
				cout<<"wrong id";
			}
		}
};




int main (){
	
	student op;
	op.add();
	op.show();
	op.search_by_id();
	
	
	
	
	
	return 0;
}