#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
int ID;
string name;
int m1,m2,m3;
int total;
float avg;
void input(int i,string n,int a, int b,int  c){
ID = i;
name = n;
m1=a;
m2=b;
m3=c;

};

void calculateResult(){
total = m1+m2+m3;
avg = total/3.0;
}

void display(){
if(avg>=80){
cout<<"A+"<<endl;
}
else if(avg>=70&&avg<80){
cout<<"A"<<endl;
}
else if(avg>=60&&avg<70){
cout<<"A-"<<endl;
}
else if(avg>=50&&avg<60){
cout<<"B"<<endl;
}
else if(avg>=40&&avg<50){
cout<<"C"<<endl;
}
else if(avg>=0&&avg<40){
cout<<"F"<<endl;
}

cout<<ID<<" "<<name<<". Total Marks = "<<total<<". avarage = "<<avg<<endl;

}

};

int main(){

Student s1,s2;

s1.input(252311098,"Tanim",60,70,80);
s1.calculateResult();
s1.display();

s2.input(252311054,"AKIB",30,50,20);
s2.calculateResult();
s2.display();


    return 0;
}