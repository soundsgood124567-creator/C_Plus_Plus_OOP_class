// #include<iostream>
// using namespace std;
// int main (){
// int total = 0;
// int number[5];

// for(int i = 0; i<5; i++){

//     cout<<"input a number :";
//     cin>>number[i];

// }
// for(int i = 0; i<5; i++){
//     total += number[i]; 
// }
//     cout<<"total :"<<total;
// return 0;
// }


#include<iostream>
using namespace std;
int main (){
int lowest;
int score[10];


    for (int i=0; i<10; i++){
        cout<<"enter student score :";
        cin>>score[i];
    }
    lowest=score[0];
    for (int i=0; i<10; i++){
        if(score[i]<lowest){
            lowest = score[i];
        }

    }
     cout<<"lowest score is :"<<lowest<<endl;
    return 0;
}




















