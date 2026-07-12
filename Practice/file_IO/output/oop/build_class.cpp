#include<iostream>
using namespace std;
class student {
    public:
    string name, gender;
    int age;



};
int main() {
    student stu;
    cout<<"Enter the name of the student: ";
    cin>>stu.name;
    cout<<"Enter the age of the student: ";
    cin>>stu.age;
    cout<<"Enter the gender of the student: ";
    cin>>stu.gender;
    return 0;
}