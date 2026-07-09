#include<iostream>
#include<fstream>
using namespace std;
#
void login(){
    string username, password;
    cout<<"enter username :";
    cin>>username;
    if(username == "jason"){
        cout<<"enter password :";
        cin>>password;
        if(password == "hihihi"){
            cout<<"login successfully"<<endl;
        }
        else {
            cout<<"wrong password"<<endl;
        }
    }
    else{
        cout<<"wrong username"<<endl;
    }
}

void add_student(){
    int id, age;
    string name;
    ofstream file("new_student.txt");
    for (int i = 0; i<3; i++){
         cout<<"enter student "<<i+1<<"'s id";
         cin>>id;
          cout<<"enter student "<<i+1<<"'s name";
         cin>>name;
          cout<<"enter student "<<i+1<<"'s age";
         cin>>age;
         file<<id<<name<<age;

    }
    file.close();
   
}

void show_stu(){

cout<<"student list"<<endl;
string name;
int age,id;
ifstream file("new_student.txt");
while(file>>id>>name>>age){
    cout<<id<<"\t"<<name<<"\t"<<age;
}
    file.close();
}



int main(){

int main_choose;

login();

cout<<"1. add student"<<endl;
cout<<"2. show student"<<endl;
cout<<"3. search student"<<endl;
cout<<"4. exit"<<endl;
cout<<"please choose one option";
cin>>main_choose;
switch(main_choose){
    case 1:{
        add_student();
        break;
    }
    case 2:{
        show_stu();
        break;
    }
}
    return 0;
}