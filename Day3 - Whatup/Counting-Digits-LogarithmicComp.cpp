#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

ll num_of_digits(ll num){ //Returns number of digits <Only for natural numbers>
    return floor(log10(num)+1);
}

int main(void){

    ll num; cin >> num;
    cout << num_of_digits(num) << endl;
    return 0;
}