/*Create a Student class with private members studentID and marks.
Write a friend function compareMarks() that accepts two Student objects and determines which student has higher marks. */
#include<bits/stdc++.h>
using namespace std;
class Student{
private:
int studentID;
int marks;
public:
Student(int a, int b){
    studentID = a;
    marks = b;
}
friend void compareMarks(Student a, Student b);
};
void compareMarks(Student a, Student b){

if(a.marks>b.marks){
    cout<<"Afif er mark besi";
}
else if(b.marks>a.marks){
    cout<<"Tanim er marks besi";
}
else{
    cout<<"Soman";
}

}


int main(){

Student Afif(2523,85);
Student Tanim(9823,85);
compareMarks(Tanim,Afif);





    return 0;
}