#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd_naive(ll a, ll b){

    ll smol= (a<b) ?a :b;
    while(smol>0){
        if(!(a%smol && b%smol))
            return smol;
        smol--;
    }
    return 1;
}

ll gcd_euclidean(ll a, ll b){

    if(!b)
        return a;
    else
        return gcd_euclidean(b, a%b);
}

int main(void){

    ll a,b; cin >> a >> b;
    
    // // GCD ~ naive way
    // cout << gcd_naive(a, b) << endl;
    
    //Optimised.
    cout << gcd_euclidean(a,b) << endl;

    return 0;
}