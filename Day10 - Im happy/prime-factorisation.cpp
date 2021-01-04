#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

// Function declarations
bool check_p(ll); //checks prime.

void prime_factors(ll num, vector<ll>& pf){
    ll n= 5;
    while(num%2==0){
        pf.push_back(2);
        num/= 2;
    }
    while(num%3==0){
        pf.push_back(3);
        num/= 3;
    } 
    
    while(n*n<=num){
        while(num%n==0){
            pf.push_back(n);
            num/= n;
        }
        n++;
    }
    if(num>1)
        pf.push_back(num);
}

void print_vect(vector<ll> v){
    for(auto val: v)
        cout << val << " ";
    cout << endl;
}

int main(void){

    ll num; cin >> num;
    vector<ll> p_factors;
    prime_factors(num, p_factors);  
    print_vect(p_factors);  
    return 0;
}