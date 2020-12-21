#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll factorial(ll n){
    ll f=1; 
        while(n>0)
            f*= n--;
    return f; 
}

ll count_trailing_zeros(ll f){

    ll count= 0;
    while(f && !(f%10)){
        count++;
        f/= 10;
    }
    return count;
}

int trailing_zeros_in_factorial(ll num){

    int k= floor(log10(num)/log10(5)), fives= 0;
    while(k)
        fives+= floor(num/ pow(5, k--));
    return fives;
}

int main(void){

    ll n; cin >> n;
    
    // //Naive-Way 
    // ll fact= factorial(n);
    // cout << count_trailing_zeros(fact) << endl;

    //Optimised-way.
    cout << trailing_zeros_in_factorial(n) << endl;
    return 0;
}