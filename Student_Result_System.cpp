#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
string name;
int ID;
int m1,m2,m3;

void setv(string n,int i,int a,int b,int c){
name = n;
ID = i;
m1 = a;
m2=b;
m3=c;
}
int total(){
    return m1+m2+m3;
}

float avg(){
   return total()/3.0;
}

void display(){

    cout<<name<<" "<<ID<<" "<<total()<<" "<<avg()<<endl;
}

};


int main(){
Student s1;
cin>>






    return 0;
}