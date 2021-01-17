#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool check_kth_bit(ll, ll);

ll power_itr(ll n, ll p)
{
    ll pow = 1, power = n;
    while (p)
    {
        if (p & 1)
            pow *= power;
        power *= power;
        p >>= 1;
    }

    return pow;
}

bool check_kth_bit(ll num, ll k)
{
    ll twoPowerK = power_itr(2, k);
    if (twoPowerK > num)
        return false;
    return (twoPowerK & num) == twoPowerK;
}

int main(void)
{
    ll num, k;
    cin >> num >> k;
    cout << check_kth_bit(num, k - 1) << endl;
    return 0;
}