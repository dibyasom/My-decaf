#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool is_power_of_2(ll num)
{
    cout << (!(num)) << endl;
    cout << (~(num)) << endl;
    return !(num & (num - 1));
}

int main(void)
{
    ll num;
    cin >> num;
    cout << is_power_of_2(num) << endl;
    return 0;
}