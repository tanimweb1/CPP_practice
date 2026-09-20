#include<bits/stdc++.h>
using namespace std;
class Student{
private:
int age;
public:
void setAge(int a){
    age = a;
}
int showAge(){
    return age;
}

};


int main(){
Student S;
S.setAge(20);
cout<<S.showAge();

    return 0;
}