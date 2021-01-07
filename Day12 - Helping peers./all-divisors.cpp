#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

void all_divisors(ll);

void all_divisors(ll num){ //Prints all divisors of num, *****returns-> void.
    for(int i=1; i*i<=num; i++)
        if (!(num%i)){
            if(i!=num/i)
                cout << i << ", " << num/i << ", ";
            else
                cout << i;
        }
    cout << endl;
}

int main(void){
    
    ll num; cin >> num;
    all_divisors(num);
    return 0;
}