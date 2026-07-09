#include<iostream>
#include<fstream>
using namespace std;

bool found = false;
int em_id,em_age;
string em_name, search_name;
int time_add, search_id, main_chosee,id_name;

void add_employee (){

    ofstream file ("employe.txt");
    cout<<"how many employee you want add ;";
    cin>>time_add;
    for(int i = 0; i<time_add;i++){

     cout<<"enter employee "<<i + 1 <<" id";
    cin>>em_id;
    cout<<"enter employee "<<i + 1 <<" name";
    cin>>em_name;
    cout<<"enter employee "<<i + 1 <<" age";
    cin>>em_age;
    file<<em_id<<" "<<em_name<<" "<<em_age<<endl;
    }
    
    file.close();

}

void show_em(){
    ifstream file("employe.txt");
    cout<<"==========employee list=========="<<endl;
    cout<<"employee id"<<"\t\t"<<"employee name"<<"\t\t"<<"employee age"<<endl;
    while (file >>em_id>>em_name>>em_age){
        cout<<em_id<<"\t\t\t"<<em_name<<"\t\t\t"<<em_age<<endl;
        
    }
    file.close();

}
void search_employee(){
    ifstream file ("employe.txt");

    cout<<"enter employee id to search :";
    cin>>search_id;
    while (file >>em_id>>em_name>>em_age){
       if(search_id == em_id){
        cout<<em_id<<"\t\t\t"<<em_name<<"\t\t\t"<<em_age<<endl;
    }
        
    }
    
    file.close();
}

void search_employee_name(){
    ifstream file ("employe.txt");
    cout<<"enter employee name to search :";
        cin>>search_name;
    while(file >> em_id>>em_name>>em_age){

        if(search_name == em_name){
            cout<<em_id<<"\t\t\t"<<em_name<<"\t\t\t"<<em_age<<endl;
        }

        }
    }





int main(){
    while(true){
        cout<<"==========employee system=========="<<endl;
        cout<<"1. add employee"<<endl;
        cout<<"2. show employee"<<endl;
        cout<<"3. search employee"<<endl;
        cout<<"4. exit"<<endl;
            cout<<"please choose one option :";
            cin>>main_chosee;
            switch(main_chosee){
                case 1:{
                    add_employee();
                    break;
                }
                case 2:{
                    show_em();
                    break;
                }
                case 3:{
                    cout<<"1. search by id"<<endl;
                    cout<<"2. search by name"<<endl;
                    cout<<"please choose one option :";
                    cin>>id_name;
                    switch(id_name){
                        case 1:{
                            search_employee();
                            break;
                        }
                        case 2:{
                            search_employee_name();
                            break;
                        }
                    }
                
                    
                    break;
                }case 4:{
                    return 0;
                }
            }
    }


    return 0;
}