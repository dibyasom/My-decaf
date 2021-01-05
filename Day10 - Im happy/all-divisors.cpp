#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void all_divisors(ll n){
    cout << 1 << " " << endl;
    for(ll i=2; i*i<=n; i++){
        while(n%i==0){
            cout << i << " ";
            cout << (n/i) << " ";
            n/= i;
        }
    }
    cout << n << " " << endl;
}

int main(void){

    ll num; cin >> num;
    all_divisors(num);
    return 0;
} 