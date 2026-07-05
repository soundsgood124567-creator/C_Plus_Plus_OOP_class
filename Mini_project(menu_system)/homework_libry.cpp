#include<iostream>
using namespace std;
 string added_book;
 int main_menu_choose;
void main_menu() {
    cout << "1. Add Book" << endl;
    cout << "2. show Books" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. borrow books" << endl;
    cout << "5. retuen books" << endl;
    cout << "6. Exit" << endl;
}

int main (){

string book_title, book_author;
int book_id;



cout<<"============Library Management System============"<<endl;

    main_menu();
    cin>>main_menu_choose;

    switch(main_menu_choose){
        case 1:{
            cout<<"enter book title : ";
            cin>>book_title;
            cout<<"enter book id :";
            cin>>book_id;
            cout<<"enter book author :";
        
        }
    }

    return 0;
}
