#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
#include<set>

using namespace std;
int main(){
string s;
cin>>s;
unordered_set<char> us;
for (int i=0;i<s.size();++i){
    us.insert(s[i]);
}
if(us.size()%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
return 0;
}