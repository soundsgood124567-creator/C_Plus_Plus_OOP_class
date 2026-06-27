#include <iostream>
using namespace std;


int add(int a, int b){
    return a+b;
}
int sub (int a,int b){
	return a-b;
}
int mul (int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}
int main(){
	
	cout<<"Addition :"<<add(6,4)<<endl;
	cout<<"substraction :"<<sub(6,4)<<endl;
	cout<<"multiplcation :"<<mul(3,12)<<endl;
	cout<<"divition :"<<divide(10,5)<<endl;
}

