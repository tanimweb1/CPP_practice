#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
int b[m];
for(int i = 0;i<m;i++){
    cin>>b[i];
}
int c[n+m];
for(int i = 0;i<n;i++){
    c[i] = a[i];
}
for(int i = n,j=0;i<n+m,j<m;i++,j++){
    c[i] = b[j];
}
for(int i = 0;i<m+n;i++){
    cout<<c[i]<<" ";
}






    return 0;
}