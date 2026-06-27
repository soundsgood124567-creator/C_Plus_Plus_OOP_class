#include<iostream>
#include<conio.h>
using namespace std;


	int new_stu_id,year_level,score;
	
	string new_stu_name, gender;
	bool has_data=false;
void add_students(){

	
	cout<<"enter student id: ";cin>>new_stu_id;fflush(stdin);cin.clear();
	cout<<"enter student name";cin>>new_stu_name;fflush(stdin);cin.clear();
	cout<<"enter student gender";cin>>gender;fflush(stdin);cin.clear();
	cout<<"enter student year level";cin>>year_level;fflush(stdin);cin.clear();
	cout<<"enter student score";cin>>score;fflush(stdin);cin.clear();
	 has_data=true;
	
	
}

void display_students(){
	cout<<"new student info"<<endl;
	cout<<"student id : "<<new_stu_id<<endl;
	cout<<"student name : "<<new_stu_name<<endl;
	cout<<"student gender : "<<gender<<endl;
	cout<<"student year level : "<<year_level<<endl;
	cout<<"student score : "<<score<<endl;

	
	
}

void search_students(){
	int search_id;
	cout<<"input student id for search: ";
	cin>> search_id;
	if(search_id==new_stu_id){
		display_students();
		
		
	}
	else {
		cout<<"student not found.";
	}
}

void update_student_info(){
	int update_id;
	cout<<"input the student id to update";
	cin>>update_id;
	if (update_id==new_stu_id){
		add_students();
		
	}
	else {
		cout<<"student not found";
	}
	
}
void delete_student_info(){
	int delete_id;
	cout<<"input the student id to delete";
	cin>>delete_id;
	if (delete_id==new_stu_id){
		 has_data=false;
		 cout<<"student deleted ";
		
	}
	else {
		cout<<"student not found";
	}
	
} 
void exit(){
	return 0;
}
int main (){
	
	add_students();
	getch();
	system("cls");
	display_students();
	getch();
	system("cls");
	search_students();
	getch();
	system("cls");
	update_student_info();
	getch();
	system("cls");
	display_students();
	getch();
	system("cls");
	delete_student_info();
	getch();
	system("cls");
		search_students();
	getch();
	system("cls");
	
	return 0;
}