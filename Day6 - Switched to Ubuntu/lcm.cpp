#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd_euclidean(ll a, ll b){

    if(!b)
        return a;
    else
        return gcd_euclidean(b, a%b);
}

int main(void){

    // Finding LCM of 2 numbers.
    ll a,b; cin >> a >> b;
    
    cout << (a*b/gcd_euclidean(a,b)) << endl;

    return 0;
}