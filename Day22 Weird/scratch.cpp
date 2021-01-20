#include <bits/stdc++.h>

using namespace std;

int log2(int);

int log2(int n)
{
    int res = 0;
    while (n >>= 1)
        res++;
    return res;
}

void set_lastk_bits(int *n, int k)
{
    for (int i = 0; i < k; i++)
    {
        *n |= (1 << i);
    }
}

int msb(int n)
{
    return (1 << log2(n));
}

int main(void)
{

    // int i = -8;
    // i >>= 1;
    // cout << (i) << " " << (INT_MAX) << endl;
    // cout << log2(16) << endl;
    // int i = 0, k = 5;
    // set_lastk_bits(&i, k);
    // cout << i << endl;
    cout << msb(5) << endl;

    return 0;
}