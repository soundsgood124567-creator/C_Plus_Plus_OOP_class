#include<iostream>
using namespace std;

int main(){
    int main_menu, teacher_menu, stu_menu;
    string teacher_search, stu_search;
    string stu_name[10]={"alan","jason","jackion","nich","ziqian","ivvan","john","ada","mom","panhth"};
    string teacher_name[5]={"pollard","hensen","meixc","chapman","wan"};

    while (true){
        cout<<"1. Teacher management"<<endl;
        cout<<"2. student management"<<endl;
        cout<<"3. exit"<<endl;
        cout<<"please choose one option :";
        cin >> main_menu;

        switch(main_menu){
            case 1:{
                cout<<"1. show teacher"<<endl;
                cout<<"2. search teacher"<<endl;
                cout<<"3. exit"<<endl;
                cout<<"please choose one option :";
                cin>>teacher_menu;

                switch(teacher_menu){
                    case 1:{
                        for (int i=0; i<=4; i++){
                            cout<<"teacher name :"<<teacher_name[i]<<" in index "<<i<<endl;
                        }
                        break;
                    }
                    case 2:{
                        cout<<"enter teacher name to search :";
                        cin>>teacher_search;
                        bool found = false;
                        for (int i=0; i<=4; i++){
                            if (teacher_search == teacher_name[i]){
                                cout<<"teacher name :"<<teacher_name[i]<<" at index "<<i<<endl;
                                found = true;
                            }
                        }
                        if (!found) cout<<"teacher not found"<<endl;
                        break;
                    }
                    case 3:{
                        return 0;
                    }
                    default:
                        cout<<"invalid option"<<endl;
                }
                break;
            }
            case 2:{
                cout<<"1. show student"<<endl;
                cout<<"2. search student"<<endl;
                cout<<"3. exit"<<endl;
                cout<<"please choose one option :";
                cin>>stu_menu;

                switch (stu_menu){
                    case 1:{
                        for (int i=0; i<=9; i++){
                            cout<<"student name :"<<stu_name[i]<<" in index "<<i<<endl;
                        }
                        break;
                    }
                    case 2:{
                        cout<<"enter student name to search :";
                        cin>>stu_search;
                        bool found = false;
                        for (int i=0; i<=9; i++){          // fixed: was i<=4
                            if (stu_search == stu_name[i]){
                                cout<<"student name :"<<stu_name[i]<<" at index "<<i<<endl;
                                found = true;
                            }
                        }
                        if (!found) cout<<"student not found"<<endl;
                        break;
                    }
                    case 3:{
                        return 0;
                    }
                    default:
                        cout<<"invalid option"<<endl;
                }
                break;
            }
            case 3:{
                return 0;
            }
            default:
                cout<<"invalid option"<<endl;
        }
    }

    return 0;
}