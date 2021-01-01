#include<bits/stdc++.h>

using namespace std;

long atleast_contests(long k, long d, long p){
    long max_days= p/k;
    return (max_days <= d) ?max_days :d;
}

int main(void){

    int t; cin >> t;
    while(t--){
        long n, k, d, p= 0, temp;
        cin >> n >> k >> d;
        for(long i=0; i<n; i++){
           cin >> temp;
           p+= temp; 
        }
        cout << atleast_contests(k, d, p) << endl;
    }

    return 0;
}