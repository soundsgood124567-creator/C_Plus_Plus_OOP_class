#include<iostream>
using namespace std; 

string user_name, password;
int choose;
float bal= 1000;
float deposite_amount, withdrawA;
void check_bal (){
    cout<<"your current balance is: "<<bal<<endl;
}
void login (){

    cout<<"Enter your user name :";
    cin>>user_name;
    if (user_name == "ziyu"){
        cout<<"Enter your password :";
        cin>>password;
        if(password == "1234"){
            cout<<"login sucessfully"<<endl;
        }else{
            cout<<"wrong username or password.";
            // break;
        }
    }

    else {
        cout<<"wrong username or password.";
        
    }

}

void deposite(){
    cout<<"how much money do you want to deposite? :";
    cin>>deposite_amount;
    bal+=deposite_amount;
    cout<<"deposite sucessfully"<<endl;
    cout<<"current balance :"<<bal<<endl;
}
void withdraw(){
    cout<<"your current balance is: "<<bal<<endl;
    cout<<"how much money do you want to withdraw? :";
    cin>>withdrawA;
    bal-=deposite_amount;
    cout<<"withdraw sucessfully."<<endl;
    cout<<"your curent balance is :"<<bal<<endl;
}

int main(){
login();
do {
    cout<<"1. check balance"<<endl;
    cout<<"2. deposite"<<endl;
    cout<<"3. withdraw"<<endl;
    cout<<"4. exit"<<endl;

    cout<<"chose on option :";
    cin>>choose;

    switch(choose){
        case 1:{
            check_bal();
        }
        case 2:{
            deposite();
        }
        case 3:{
            withdraw();
        }
        case 4:{  
            return 0;
        }
    }
}while(choose!=4);

    return 0;
}




    







