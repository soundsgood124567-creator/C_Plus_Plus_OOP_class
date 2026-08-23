#include<iostream>
#include<fstream>
using namespace std;

void add_stu(){
    string name;
    int age, id;
    ofstream file("add_stu.txt");

    for (int i = 0; i<3; i++){

        cout<<"student name "<<i + 1 <<":";
        cin>>name;
        cout<<"student ID "<<i + 1<<":";
        cin>>id;
        cout<<"student AGE "<<i + 1 <<":";
        cin>>age;
        file<<name<<id<<age<<endl; 
    }
    file.close();
}





void show_stu(){
    cout<<"student list"<<endl;
    ifstream file("add_stu.txt");
    string name;
    int age, id; 
    while(file>>name>>age>>id){
        cout<<name<<"\t"<<id<<"\t"<<age<<endl;
    }
    file.close();
}
  

int main(){

    add_stu();
    show_stu();
    return 0;
}