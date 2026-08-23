
#include<iostream>
using namespace std;

class Student{
    public:
     int age, id;
     string name, gender;

};




int main(){

    Student ask;
    cout<<"enter student id :";
    cin>>ask.id;
    fflush(stdin);cin.clear();
    cout<<"enter student  name :";
    cin>>ask.name;
    fflush(stdin);cin.clear();
    cout<<"enter student age :";
    cin>>ask.age;
    fflush(stdin);cin.clear();
    cout<<"enter student gender :";
    cin>>ask.gender;
     fflush(stdin);cin.clear();\
     
    cout<<"==========result=========="<<endl;
    cout<<"student id :"<<ask.id<<endl;
    cout<<"student name :"<<ask.name<<endl;
    cout<<"student age :"<<ask.age<<endl;
    cout<<"student gender :"<<ask.gender<<endl;



    return 0;
}