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

int n,x;
cin>>n>>x;
int d;
int A[2][n];
for (int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin>>A[i][j];
    }
}
for (int i=0;i<2;i++){
    for(int j=0;j<n;j++){
    if((A[1][j]+ 6 )> A[2][j]){d==0;}
    }
}
if(d==1){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

    }

    return 0;
}