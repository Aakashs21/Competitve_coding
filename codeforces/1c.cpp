#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

   string s;
   cin>>s;
   int d=0;
   int count =0;
   for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){count+=1;
    
    if(count>=6){d=1;}}
    else{count=0;}
    
   }
   if(d==1){cout<<"YES";}
   else{cout<<"NO";}
  

    return 0;
}