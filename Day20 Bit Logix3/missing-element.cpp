#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll missing_element(vector<ll> &arr)
{
    ll res_arr = 0, res_n = 0, n = arr.size(), ptr = 1;
    while (ptr <= n)
    {
        res_arr ^= arr[ptr - 1];
        res_n ^= ptr++;
    }
    res_n ^= ptr;

    return res_arr ^ res_n;
}

int main(void)
{
    vector<ll> arr = {1, 2, 3, 5};
    cout << missing_element(arr) << endl;

    return 0;
}