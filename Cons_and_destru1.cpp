/*Create a Student class with studentID and marks. Use a constructor to initialize 
the values and a destructor to display a message when the object is destroyed.*/
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
int id;
int marks;
Student(int a,int b){
    id = a;
    marks = b;
}

// void Display(){

// cout<<id<<" "<<marks<<endl;

// }
~Student(){
    cout<<"Destructor is called"<<endl;
}

};

int main(){
Student Tanim(98,56);
Student Afif(25,67);

// Tanim.Display();
// Afif.Display();

cout<<Tanim.id<<" "<<Tanim.marks<<endl;
cout<<Afif.id<<" "<<Afif.marks<<endl;





    return 0;
}