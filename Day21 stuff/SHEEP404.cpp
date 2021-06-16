/*
Find the only 2 odd occuring elements in a array when rest all elements have even frquency.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void filter_odd_occuring(vector<ll> &arr)
{
    int res = 0, len = arr.size(), k = 0, setA = 0, setB = 0;
    for (ll i = 0; i < len; i++)
        res ^= arr[i];
    k = res & ~(res - 1);
    for (ll i = 0; i < len; i++)
        if (arr[i] & k)
            setA ^= arr[i];
        else
            setB ^= arr[i];

    if (setA < setB)
        cout << setA << " " << setB << endl;
    else
        cout << setB << " " << setA << endl;
}

int main(void)
{
    ll size;
    cin >> size;
    vector<ll> arr;
    while (size--)
    {
        ll temp;
        cin >> temp;
        arr.push_back(temp);
    }

    filter_odd_occuring(arr);

    return 0;
}
