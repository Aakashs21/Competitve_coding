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
    
int n;
cin>>n;
vector<int > v;
int sum=0;
int max=0;
for(int i=0;i<n;i++){
    int a ,b;
    cin>>a>>b;
  
   sum=sum-a+b;
   v.push_back(sum);

}

cout<<*max_element(v.begin(),v.end());
    
    return 0;
}