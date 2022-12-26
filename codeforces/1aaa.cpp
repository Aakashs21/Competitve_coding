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
vector<int>v;
f(i,1,n+1){
    int x;
    cin>>x;
    v.push_back(x);
}
int count=0;
f(i,1,n){
    f(j,i,n){
        if(v[j]-v[i]==j-i){count++;}
    }
}
cout<<count<<endl;
	}

	return 0;
}