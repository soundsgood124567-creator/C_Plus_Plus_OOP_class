#include<iostream>
using namespace std;



int main(){

    string stu_name [5]={"jason","ziqian","ziyu","nich","alan"};
    string stu_search;
    cout<<"enter the student name to search :";
    cin>>stu_search;

    for (int i = 0; i <= 4 ; i++){
        if (stu_search == stu_name[i]){
            cout<<stu_name[i]<<"at index"<<i;
        }
    }

    



    return 0;
}