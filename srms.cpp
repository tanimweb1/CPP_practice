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






//another version  

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
int ID;
string name,dept;
int m1,m2,m3;
int total;
float avg;
string grade;
void input(){
cout<<"Enter the info"<<endl;
cin>>name>>dept>>ID;
cout<<"Enter 3 subjcts marks"<<endl;
cin>>m1>>m2>>m3;

};

void calculateResult(){
total = m1+m2+m3;
avg = total/3.0;
if(avg>=80){
grade = "A+";
}
else if(avg>=70&&avg<80){
grade = "A";
}
else if(avg>=60&&avg<70){
grade = "A-";
}
else if(avg>=50&&avg<60){
grade = "B";
}
else if(avg>=40&&avg<50){
grade = "C";
}
else if(avg>=0&&avg<40){
grade = "F";
}

}

void display(){


cout<<ID<<" "<<name<<". Total Marks = "<<total<<". avarage = "<<avg<<"Grade = "<<grade<<endl;

}

};

int main(){

Student s1,s2;

s1.input();
s1.calculateResult();
s1.display();

s2.input();
s2.calculateResult();
s2.display();


    return 0;
}
