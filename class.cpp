#include<bits/stdc++.h>
using namespace std;

namespace A{
    void display(){
        cout<<"hello";
    }
}
namespace B{
    void display(){
        cout<<"hi";
    }
}


int main(){

A::display();
B::display();


    return 0;
}
