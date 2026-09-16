#include<bits/stdc++.h>
using namespace std;
int main(){
class Student{

    public:
    int age;
    int id;
    int salary;

Student(int age,int id,int salary){
this->age = age;
this->id = id;
this->salary = salary;

}


};
Student Tanim(20,252311,10000);
Student Akib(30,252310,20000);
Student Rifat(25,252312,30000);

cout<<Tanim.age<<" "<<Tanim.id<<" "<<Tanim.salary<<endl;
cout<<Akib.age<<" "<<Akib.id<<" "<<Akib.salary<<endl;
cout<<Rifat.age<<" "<<Rifat.id<<" "<<Rifat.salary<<endl;


    return 0;
}