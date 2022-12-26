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
int d,e;
vector<int>v;
for (int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
d=v.size();

for(int t=0;t<n;t++){
    for(int i=t+1;i<=n;i++){
        vector <int> :: iterator it=v.begin();
if(v[t]==v[i]){v.erase(it); break;}
    }
}

for (auto x:v){cout<<x<<" "<<endl;}
e=v.size();
cout<<d-e<<endl;
    }

    return 0;
}

