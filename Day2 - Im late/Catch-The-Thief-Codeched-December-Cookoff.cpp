#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

string can_thief_be_caught(ll x, ll y, ll k, ll n){
    if(x==y)
        return "YES\n";
    else if(!(abs(x-y)%(2*k)))
        return "YES\n";
    return "NO\n";
    
}

string can_thief_be_caught1(ll x, ll y, ll k, ll n){
    if(x==y)
        return "YES\n";
    int a, b;
    if(x>y){
        a= x;
        b= y;
    }
    else{
        a= y;
        b= x;
    }
    
    while(a>=b){
        if(a==b)
            return "YES\n";
        a-=k;
        b+=k;
    }
    return "NO\n";
}

int main(void){

    int t; cin >> t;
    while(t--){
        ll x, y, k, n; 
        cin >> x >> y >> k >> n;
        cout << can_thief_be_caught1(x, y, k, n);
    }
    return 0;
}