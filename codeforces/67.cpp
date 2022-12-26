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

    while(t--){

int n;
cin>>n;
int A[3];
int d;
for(int i=0;i<3;i++){
    cin>>A[i];
}
if(A[n-1]==0){cout<<"NO"<<endl;}
else { 
    if (A[A[n-1]-1]==0){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}
}


    }

    return 0;
}