#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void filter_odd_occuring(vector<ll> &arr)
{
    int res = 0, len = arr.size();
    for (ll i = 0; i < len; i++)
        res ^= arr[i];
}

int main(void)
{
    vector<ll> arr = {1, 2, 1, 1, 3, 1, 5, 5};
    filter_odd_occuring(arr);

    return 0;
}