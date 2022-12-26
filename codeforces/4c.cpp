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
        
    
        ll n,k;
        cin>>n>>k;
        if(n%2==0){
            if(k>(n/2)){cout<<2*(k-(n/2));}
            else{cout<<(2*k)-1;}
        }
        else{
            if(k<=((n/2)+1)){cout<<(2*k)-1;}
            else{cout<<2*(k-(n/2)-1);}
        }
    
        return 0;
    }