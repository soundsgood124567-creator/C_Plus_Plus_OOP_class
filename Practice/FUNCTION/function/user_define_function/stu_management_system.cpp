#include <iostream>
using namespace std;
int id;
int age;
int math_score;
int english_score;
int chinese_score;
int khmer_score;
string name;
string gender;

// void add_stu(int id,int age,int math_score,int english_score,int chinese_score, int khmer_score, string name, string gender){
void add_stu(){
    cout<<"input the student id :";
    cin>>id;
    cout<<"input the student name :";
    cin>>name;
    cout<<"input the student gender :";
    cin>>gender;
    cout<<"input student age :";
    cin>>age;
    cout<<"input student math score :";
    cin>>math_score;
    cout<<"input student English score :";
    cin>>english_score;
    cout<<"input student chinese score";
    cin>>chinese_score;
    cout<<"input student khmer score";
    cin>>khmer_score;
}
void show_stu(){
    cout<<"student id :"<<id<<endl;
    cout<<"student name :"<<name<<endl;
    cout<<"student gender :"<<gender<<endl;
    cout<<"student age :"<<age<<endl;
    cout<<"student math score :"<<math_score<<endl;
    cout<<"student english score :"<<english_score<<endl;
    cout<<"student chinese score :"<<chinese_score<<endl;
    cout<<"student khmer score :"<<khmer_score<<endl;
}


int main(){
    

add_stu();

show_stu();



    return 0;
}