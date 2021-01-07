#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
void print_vec(vector<ll>&);

ll power(ll n, ll p){
    static vector<ll> c_powers(p+1, 0);
    c_powers[0]= 1;
    c_powers[1]= n;

    print_vec(c_powers);
    if(c_powers[p])
        return c_powers[p];
    if(p&1){
        c_powers[p]= n*power(n, p-1);
        return c_powers[p];
    }
    c_powers[p]= power(n, p/2)*power(n, p/2);
    return c_powers[p];
}

void print_vec(vector<ll>& v){
    for(auto val: v)
        cout << val << " ";
    cout << endl;
}
int main(void){

    ll n, p; cin >> n >> p; //To compute n^p.
    // vector<ll> c_powers(p+1, 0);
    // c_powers[0]= 1;
    // c_powers[1]= n;
    cout << power(n, p) << endl;
    return 0;
}