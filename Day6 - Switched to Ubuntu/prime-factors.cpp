// Program to print all prime factors in O(sq.root(n) * log n) time complexity.
// @Dibyasom

#include<bits/stdc++.h>

using namespace std;

// O(sq.root(n) * log n) 
vector<int> primeFactors(int n){
    vector<int> pFactors;

    if(n>=1){
        // O(log n) | T(n) = T(n/2) + O(1)
        while(n%2==0 || n%3==0){
            int f = (n%2==0) ?2 : 3;
            pFactors.push_back(f);
            n/=f;
        }

        // O(sq.root(n) * log n)
        for(int i=5; i*i<=n; i+=6){
            while(n%i==0 || n%(i+2)==0){
                int f = (n%i==0) ?i : (i+2);
                pFactors.push_back(f);
                n/=f;
            }
        }

        // O(1)
        if(n>1)
            pFactors.push_back(n);
    }
        
    return pFactors;
}

void printVector(vector<int> v){
    for(auto val: v)
        cout << val << endl;
}

int main(void){
    int n; cin >> n;
    vector<int> pFactors = primeFactors(n);
    if(pFactors.size() >= 1)
        printVector(pFactors);

    return 0;
}