#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll power_inplace(ll n, ll p){
    ll raised= n, power= 1;
    while(p>0){
        if(p&1)
            power*= raised;
        raised*= raised;
        p= p>>1;
    }
    return power;
}

int main(void){

    ll n, p; cin >> n >> p;
    cout << power_inplace(n, p) << endl;
    return 0;
}