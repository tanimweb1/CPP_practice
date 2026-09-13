#include<bits/stdc++.h>
using namespace std;

class Employee{

public: 
int ID;
int price;


};

class Teacher:public Employee{

void display(){
    cout<<"hello";
}
};
class Staff : public Employee{

void newDisplay(){
    cout<<"hi";
}

};

int main(){
Teacher a;
Staff b;
a.display();
b.newDisplay();


}