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
    

    int t;
    cin>>t;
int count=0;
    while(t--){

string s;
cin>>s;

if(s[0]=='I'){count+=20;}
else if(s[0]=='D'){count+=12;}
else if(s[0]=='O'){count+=8;}
else if(s[0]=='C'){count+=6;}
else if(s[0]=='T'){count+=4;}

    }
cout<<count;
    return 0;
}