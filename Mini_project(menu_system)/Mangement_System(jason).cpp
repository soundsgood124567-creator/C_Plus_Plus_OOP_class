#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int main_menu, sub_menu;
	float total;
	do{
		cout<<"\t\t\t\t\t======= RESTAURANT MENU ======="<<endl;
		cout<<"\t\t\t\t\t1. Food menu"<<endl;
		cout<<"\t\t\t\t\t2. Drink menu"<<endl;
		cout<<"\t\t\t\t\t3. Dessert menu"<<endl;
		cout<<"\t\t\t\t\t4. Show bill"<<endl;
		cout<<"\t\t\t\t\t5. Exit"<<endl;
		cout<<"\t\t\t\t\tchose one option ";
		cin>> main_menu;
		;fflush(stdin);cin.clear();
		
			
			switch (main_menu){
			case 1 :{
				do{
				cout<<"\t\t\t\t\t1. Pork chop: $6"<<endl;
				cout<<"\t\t\t\t\t2. Steak: $20"<<endl;
				cout<<"\t\t\t\t\t3. Chicken: $8"<<endl;
				cout<<"\t\t\t\t\t4. Salmon: $35"<<endl;
				cout<<"\t\t\t\t\t5. Back"<<endl;
				cout<<"\t\t\t\t\tEnter choice";
				cin>>sub_menu;
				system("cls");
						switch(sub_menu){
							case 1 :{
								total+= 6;
								
								cout<<"Pork added to the bill."<<endl;
								break;
								
							}case 2 :{
								total+= 20;
								cout<<"Steak added to the bill."<<endl;
								break;
							}case 3 :{
								cout<<"Chicken added to the bill."<<endl;
							break;
							}case 4:{
								cout<<"Salmon added to the bill"<<endl;
							break;
							}
						}
					}while(sub_menu !=5);
				break;
				}case 2 :{			
				do{
					cout<<"\t\t\t\t\t1. Water: $5"<<endl;
					cout<<"\t\t\t\t\t2. Coke: $7"<<endl;
					cout<<"\t\t\t\t\t3. Sprite: $7"<<endl;
					cout<<"\t\t\t\t\t4. Fanta: $7"<<endl;
					cout<<"\t\t\t\t\t5. Orange juice: $8"<<endl;
					cout<<"\t\t\t\t\t6. water melon juice: $8"<<endl;
					cout<<"\t\t\t\t\t7. Apple juice: $8"<<endl;
					cout<<"\t\t\t\t\t8. Back"<<endl;
					cout<<"\t\t\t\t\tEnter choice";
					cin>>sub_menu;
					system("cls");						
					switch(sub_menu){
						case 1:{
							cout<<"\t\t\t\t\tWater added to the bill."<<endl;
							break;
						}case 2 :{
						 cout<<"\t\t\t\t\tCoke added to the bill."<<endl;
						break;
						}case 3 :{
							cout<<"\t\t\t\t\tSprite added to the bill."<<endl;
						break;
						} case 4:{
							cout<<"\t\t\t\t\tFanta added to the bill. "<<endl;
							break;
						}case 5:{
							cout<<"\t\t\t\t\tOrange juice added to the bill."<<endl;
							break;
						}case 6:{
							cout<<"\t\t\t\t\t water melon juice added the bill."<<endl;
							break;
						}
						case 7:{
							cout<<"\t\t\t\t\t Apple juice added the bill.";
							break;
						}
					}
					
				}while(sub_menu !=8);
					break;
				}case 3 :{
			
					cout<<"\t\t\t\t\t1. Mango: $8"<<endl;
					cout<<"\t\t\t\t\t2. Water melon: $8"<<endl;
					cout<<"\t\t\t\t\t3. Water melon ice cream: $10"<<endl;
					cout<<"\t\t\t\t\t4. Mango ice cream: $10"<<endl;
					cout<<"\t\t\t\t\t5. Honey apple: $8"<<endl;
					cout<<"\t\t\t\t\t6. Vanilla ice cream: $9"<<endl;
					cout<<"\t\t\t\t\t7. back"<<endl;
					cout<<"\t\t\t\t\tEnter choice";
					cin>>sub_menu;
					switch(sub_menu){
						case 1:{
							cout<<"\t\t\t\t\tMango added to the bill."<<endl;
							break;
							
						}
						case 2:{
							cout<<"\t\t\t\t\tWater melon added to the bill."<<endl;
							break;
						}
						case 3:{
							cout<<"\t\t\t\t\tWater melon added to the bill."<<endl;
							break;
						}
						case 4:{
							cout<<"\t\t\t\t\tMango ice cream added to the bill."<<endl;
							break;
						}
						case 5 :{
							cout<<"\t\t\t\t\tVanilla ice cream added the to bill."<<endl;
							
							break;
						}
					}
						break;
				}
				case 4:{
				cout<<" total bill "<<total<<endl;
				break;
			}
			}case 5 
			
	}while(main_menu !=5);
}
