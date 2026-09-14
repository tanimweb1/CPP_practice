#include<bits/stdc++.h>
using namespace std;

class Student{
private:
int age;
public:
void getAge(int a){
    age = a;
}
void showAge(){
    cout<<age;
}



};
int main(){
Student a;
a.getAge(20);
a.showAge();
return 0;
}
