#include<iostream>
using namespace std;
void print_line(char symbol, int number){
    for(int i = 0; i<number; i++){
        cout<<symbol;
    }
}

void start_game(){
    cout<<"1.start game."<<endl;
}
void load_game(){
    cout<<"2.load game."<<endl;
}
void exit(){
    cout<<"3.exit game"<<endl;
}

int main (){
    print_line('=',16); cout<<endl;
    start_game();
    print_line('=',16); cout<<endl;
    load_game();
    print_line('=',16); cout<<endl;
    exit();

    return 0;
}