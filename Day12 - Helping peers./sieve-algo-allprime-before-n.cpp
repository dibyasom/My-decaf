#include<bits/stdc++.h>

using namespace std;

void all_primes_before(int num){
    vector<bool> is_prime(num+1, true);
    for(int i=2; i<=num; i++){
        if(is_prime[i]){
            cout << i << " ";
            for(int j= i*i; j<=num; j+=i)
                is_prime[j]= false;
        }
    }
    cout << endl;
}

int main(void){

    int num; cin >> num;
    all_primes_before(num);
    return 0;
}