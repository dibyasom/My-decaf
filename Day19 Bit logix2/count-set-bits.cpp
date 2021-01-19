#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll count_set_bits(ll num)
{
    ll count = 0;
    while (num)
    {
        if (num & 1)
            count++;
        num >>= 1;
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