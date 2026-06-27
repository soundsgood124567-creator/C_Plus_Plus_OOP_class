#include<iostream>
using namespace std;
int main(){
string item;
float qty, price_per, total_price ,  saved;
    cout<<"What do you want to buy?";
    cin>>item;
    cout<<"How many product do you want to buy?";
    cin>>qty;
    cout<<"what is the price per item?";
    cin>>price_per;

total_price=price_per*qty;
cout<<"total price: "<<total_price<<endl;

if(total_price>=300  && total_price<=399.99){

    saved= total_price*0.9;
    cout<<"you got a discount(10%)"<<endl;
    cout<<"price after discount: $"<<saved;
}
else if(total_price>=400 && total_price<=499.99){
    saved= total_price*0.8;
    
    cout<<"you got a discount(20%)"<<endl;
    cout<<"price after discount: "<<saved;
}
else if(total_price>=500 && total_price<=599.99){
    saved= total_price*0.7;
    cout<<"you got a discount(30%)"<<endl;
    cout<<"price after discount: "<<saved;
}
else if(total_price>=600 && total_price<=699.99){
    saved= total_price*0.6;
    cout<<"you got a discount(40%)"<<endl;
    cout<<"price after discount: "<<saved;
}
else if(total_price>=700){
    saved= total_price*0.5;
    cout<<"you got a discount(50%)"<<endl;
    cout<<"price after discount: "<<saved;
}
else{
    cout<<"since your total bill is under $300 you get no discount.";
}

    return 0;
}