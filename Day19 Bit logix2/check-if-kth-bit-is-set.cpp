#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool check_kth_bit(ll, ll);

bool check_kth_bit(ll num, ll k)
{
    return (num >> (k - 1)) & 1;
}

int main(void)
{
    ll num, k;
    cin >> num >> k;
    cout << check_kth_bit(num, k) << endl;
    return 0;
}