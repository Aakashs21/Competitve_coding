#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
int s;

int r=t/5;
if(t%5==0){r=t/5,s=0;}
else{

s=1;
}
cout<<r+s;


return 0;
}