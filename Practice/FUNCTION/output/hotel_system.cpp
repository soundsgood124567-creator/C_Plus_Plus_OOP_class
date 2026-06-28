#include<iostream>
using namespace std;

string customer_name, room_type;
int num_night, room_price,total_price, price_discount;

void hotel_booking(){
cout<<"Enter customer name :";
cin>>customer_name;
cout<<"Enter room tpye (standard:$40 /Deluxe:$70 /VIP$120) :";
cin>>room_type;
cout<<"Enter number if night :";
cin>>num_night;
cout<<"Price of the room :";
cin>>room_price;
}


int main(){
cout<<"========= Hotel booking system ========="<<endl;
cout<<"stay >= 7 night = 20% Discount"<<endl;
cout<<"stay >= 4 night = 10% Discount"<<endl;

hotel_booking();

total_price=num_night*room_price;

if(num_night >= 7){
price_discount=total_price*0.8;
}
else if(num_night >=4){
price_discount=total_price*0.9;
}
else {
    price_discount=total_price;
}

cout<<"========= booking recipe ========="<<endl;
cout<<"customer name "<<customer_name<<endl;
cout<<"room type "<<room_type<<endl;
cout<<"number of nights "<<num_night<<endl;
cout<<"total price "<<total_price<<endl;
cout<<"discounted price "<<price_discount<<endl;
cout<<"==============================="<<endl;
    return 0;
}