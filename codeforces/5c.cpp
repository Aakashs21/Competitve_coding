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
     vector<int>v;
     set<int>s;
     int count=1;
     for (int i=0;i<n;i++){
     int x;
     cin>>x;
     v.push_back(x);
     }s.insert(count);
     for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){count+=1; 
        s.insert(count);}
        else{count=1;}
     }
     cout<<*max_element(s.begin(),s.end());

    return 0;
}