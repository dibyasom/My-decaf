#include<bits/stdc++.h>

using namespace std;

long fair_swaps(long n, long m, vector<long>& a, vector<long>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<long>());

    long ptr= 0, max_itr= min(n, m);
    long a_votes= accumulate(a.begin(), a.end(), 0), b_votes= accumulate(b.begin(), b.end(), 0);
    while(ptr < max_itr && a_votes <= b_votes && a[ptr] < b[ptr]){
        a_votes += (b[ptr]-a[ptr]);
        b_votes += (a[ptr]-b[ptr]);
        ptr++;
    }

    if(a_votes > b_votes)
        return ptr;
    else
        return -1;
}

int main(void){

    long t; cin >> t;
    while(t--){
        long n, m; cin >> n >> m;
        vector<long> a(n), b(m);
        for(long i=0; i<n; i++)
            cin >> a[i];
        for(long i=0; i<m; i++)
            cin >> b[i];
        cout << fair_swaps(n, m, a, b) << endl;
    }
    return 0;
}