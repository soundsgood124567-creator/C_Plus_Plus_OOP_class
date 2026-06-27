#include <iostream>
using namespace std;

int table(int num) { 
    for(int i = 0; i <= 10; i++) { 
        cout << num << " x " << i << " = " << (num * i) << endl; 
    } 
    return 0;
} 

int main() { 
    table(1);
   	 cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<" "<<endl;
      
    table(2);
    cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<" "<<endl;
    table(3);
    cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<" "<<endl;
    return 0; 
}