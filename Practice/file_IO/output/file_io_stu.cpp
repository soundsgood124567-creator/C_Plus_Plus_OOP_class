#include<iostream>
#include<fstream>
using namespace std;

bool found = false;
int stu_id,stu_age, stud_year_level,stu_score;
string stu_name, search_name,new_name,update_name;
int time_add, search_id, main_chosee,id_name,update_id,new_id,new_year_level,new_age,new_score;

void add_student (){

    ofstream file ("student.txt");
    cout<<"how many student you want add :";
    cin>>time_add;
    for(int i = 0; i<time_add;i++){     
        cout<<"enter student "<<i + 1 <<" id :";
        cin>>stu_id;
        fflush(stdin);cin.clear();
        cout<<"enter student "<<i + 1 <<" name :";
        cin>>stu_name;
        fflush(stdin);cin.clear();
        cout<<"enter student "<<i + 1 <<" age :";
        cin>>stu_age;
        fflush(stdin);cin.clear();
        cout<<"enter student "<<i +1<<" year level :";
        cin>>stud_year_level;
        fflush(stdin);cin.clear();
        cout<<"enter student "<<i +1<<" score";
        cin>>stu_score;
        fflush(stdin);cin.clear();
        file<<stu_id<<" "<<stu_name<<" "<<stu_age<<" "<<stud_year_level<<" "<<stu_score<<endl;
    }
    
    file.close();

}

void show_stu(){
    ifstream file("student.txt");
    cout<<"==========student list=========="<<endl;
    cout<<"student id"<<"\t\t"<<"student name"<<"\t\t"<<"student age"<<"\t\t"<<"year level"<<"\t\t"<<"score"<<endl;
    while (file >>stu_id>>stu_name>>stu_age>>stud_year_level>>stu_score){
        cout<<stu_id<<"\t\t\t"<<stu_name<<"\t\t\t"<<stu_age<<"\t\t\t"<<stud_year_level<<"\t\t\t"<<stu_score<<endl;
        
    }
    file.close();

}
void search_student(){
    ifstream file ("student.txt");

    cout<<"enter student id to search :";
    cin>>search_id;
    fflush(stdin);cin.clear();
    while (file >>stu_id>>stu_name>>stu_age>>stud_year_level>>stu_score){
       if(search_id == stu_id){
            cout<<stu_id<<"\t\t\t"<<stu_name<<"\t\t\t"<<stu_age<<endl;
        }
        else {
            cout<<"student not found.";
        }
            
        
    
        
    }
    
    file.close();
}

void search_student_name(){
    ifstream file ("student.txt");
    cout<<"enter student name to search :";
        cin>>search_name;
        fflush(stdin);cin.clear();
    while(file >> stu_id>>stu_name>>stu_age){

        if(search_name == stu_name){
                cout<<stu_id<<"\t\t\t"<<stu_name<<"\t\t\t"<<stu_age<<endl;
            }
            else {
                cout<<"student not found.";
            }
    }
}

void update(){
    ifstream file("student.txt");
    ofstream tempp("temp.txt");
    cout<<"enter student id to update :";
    cin>>update_id;
    fflush(stdin);cin.clear();
    while(file>>stu_id>>stu_name>>stu_age>>stud_year_level>>stu_score){
        if(update_id == stu_id){
            cout<<"enter new id :";
            cin>>new_id;
            fflush(stdin);cin.clear();
             cout<<"enter new name :";
            cin>>new_name;
            fflush(stdin);cin.clear();
            cout<<"enter new age :";
            cin>>new_age;
            fflush(stdin);cin.clear();
            cout<<"enter new year level :";
            cin>>new_year_level;
            fflush(stdin);cin.clear();
            cout<<"enter new score :";
            cin>>new_score;
            fflush(stdin);cin.clear();
        }
        tempp<<new_id<<new_name<<new_age<<new_year_level<<new_score;


    }
    file.close();
    tempp.close();
    remove("student.txt");
    rename("temp.txt", "student.txt");
    

}


void update_using_name(){
    ifstream file("student.txt");
    ofstream tempp("temp.txt");
    cout<<"enter student name to update :";
    cin>>update_name;
    fflush(stdin);cin.clear();
    while(file>>stu_id>>stu_name>>stu_age>>stud_year_level>>stu_score){
        if(update_name == stu_name){
            cout<<"enter new id :";
            cin>>new_id;
            fflush(stdin);cin.clear();
             cout<<"enter new name :";
            cin>>new_name;
            fflush(stdin);cin.clear();
            cout<<"enter new age :";
            cin>>new_age;
            fflush(stdin);cin.clear();
            cout<<"enter new year level :";
            cin>>new_year_level;
            fflush(stdin);cin.clear();
            cout<<"enter new score :";
            cin>>new_score;
            fflush(stdin);cin.clear();
        }
        tempp<<new_id<<new_name<<new_age<<new_year_level<<new_score;


    }
    file.close();
    tempp.close();
    remove("student.txt");
    rename("temp.txt", "student.txt");
    

}





int main(){
    while(true){
        cout<<"==========student system=========="<<endl;
        cout<<"1. add student"<<endl;
        cout<<"2. show student"<<endl;
        cout<<"3. search student"<<endl;
        cout<<"4. update student"<<endl;
        cout<<"5. exit"<<endl;
            cout<<"please choose one option :";
            cin>>main_chosee;
            switch(main_chosee){
                case 1:{
                    add_student();
                    break;
                }
                case 2:{
                    show_stu();
                    break;
                }
                case 3:{
                    cout<<"1. search by id"<<endl;
                    cout<<"2. search by name"<<endl;
                    cout<<"please choose one option :";
                    cin>>id_name;
                    fflush(stdin);cin.clear();
                    switch(id_name){
                        case 1:{
                            search_student();
                            break;
                        }
                        case 2:{
                            search_student_name();
                            break;
                        }
                    }
                
                    
                    break;
                }case 4:{
                    switch(id_name){
                        case 1:{
                            update();
                            break;
                        }
                        case 2:{
                            update_using_name();
                            break;
                        }
                    }
                }
                case 5:{
                    return 0;
                }
            }
    }
    


    return 0;
}