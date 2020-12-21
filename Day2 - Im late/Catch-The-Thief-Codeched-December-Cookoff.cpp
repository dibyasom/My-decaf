#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;


int main(void){

    int t; cin >> t;
    while(t--){
        ll x, y, k, n; 
        cin >> x >> y >> k >> n;
        cout << can_theif_be_caught(x, y, k, n);
    }
    return 0;
}