#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void filter_odd_occuring(vector<ll> &arr)
{
    int res = 0, len = arr.size(), k = 0, setA = 0, setB = 0;
    for (ll i = 0; i < len; i++)
        res ^= arr[i];
    while ((res & 1) == 0)
    {
        res >>= 1;
        k++;
    }
    for (ll i = 0; i < len; i++)
        if ((arr[i] >> k) & 1)
            setA ^= arr[i];
        else
            setB ^= arr[i];

    cout << setA << " " << setB << endl;
}

int main(void)
{
    vector<ll> arr = {1, 2, 1, 1, 3, 1, 5, 5};
    filter_odd_occuring(arr);

    return 0;
}