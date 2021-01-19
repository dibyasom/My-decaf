#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll count_set_bits(ll num)
{
    int table[256], count = 0;
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = (i & 1) + table[i >> 1];

    while (num > 0)
    {
        count += table[num & 0xff];
        num >>= 8;
    }

    return count;
}

int main(void)
{

    ll num;
    cin >> num;
    cout << count_set_bits(num) << endl;
    return 0;
}