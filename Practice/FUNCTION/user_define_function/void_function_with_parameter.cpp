#include<iostream>
using namespace std;
void print_line(char symbol, int number){
    for(int i = 0; i<number; i++){
        cout<<symbol;
    }
}


int main(){
print_line('=',16);
}