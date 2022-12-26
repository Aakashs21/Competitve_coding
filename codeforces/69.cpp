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
    

    ll t;
    cin>>t;

    while(t--){

ll n;
cin>>n;
if(n==1){cout<<'2'<<endl;}
else if(n==2||n==3){cout<<'1'<<endl;}
else if (n==4){cout<<'2'<<endl;}
else if((n%3)==0){cout<<n/3<<endl;}
else if(n%3==1){cout<<(n/3)+2<<endl;}
else if(n%3==2){cout<<(n/3)+1<<endl;}
    }

    return 0;
}