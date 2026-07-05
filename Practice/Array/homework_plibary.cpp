#include<iostream>
using namespace std;

int main_menu;
float search_id;
int book_id[10];
string book_title[10];
string book_author[10];
int borrow[10];

int countBook = 0;


void addbook(){
    cout<<"enter the book id :";
    cin>>book_id[countBook];
    cout<<"enter book title :";
    cin>>book_title[countBook];
    cout<<"enter book author :";
    cin>>book_author[countBook]; 

    borrow[countBook] = false;
    countBook++;


}
void showbook(){
    cout<<"book id \t\tbook title \t\tbook author"<<endl;

    for (int i =0; i < countBook; i++){
        // cout<<"current books :"<<endl;
        cout<<book_id[i]<<"\t\t\t"<<book_title[i]<<"\t\t\t"<<book_author[i]<<endl;



    }
}


void searchbook(){
    cout<<"enter book id to search ;";
    cin>>search_id;
    for (int i = 0; i< countBook; i++)
    if (search_id == book_id[i]){
        cout<<book_id[i]<<"\t\t\t"<<book_title[i]<<"\t\t\t"<<book_author[i]<<endl;


    }
}





int main(){
    do {
        cout<<"========== Library Management System =========="<<endl;
        cout<<"1. add books"<<endl;
        cout<<"2. show books"<<endl;
        cout<<"3. search books"<<endl;
        cout<<"4. borow ooks"<<endl;
        cout<<"5. return books"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"please choose one option :";
        cin>>main_menu;
        switch(main_menu){
            case 1:{
                addbook();
                break;
            }
            case 2:{
                showbook();
                break;
            }
            case 3:{
                searchbook();
                break;
            }
        }

    }  while(main_menu!=6);

    return 0;

 }



