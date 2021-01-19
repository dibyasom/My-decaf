#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll odd_occuring_element(vector<ll> &arr)
{
    ll res = 0, len = arr.size(), ptr = 0;
    while (ptr < len)
        res ^= arr[ptr++];

    return res;
}

int main(void)
{
    vector<ll> arr = {1, 1, 1};
    cout << odd_occuring_element(arr) << endl;

    return 0;
}