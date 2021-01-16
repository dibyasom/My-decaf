#include <bits/stdc++.h>

using namespace std;

int extended_gcd(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extended_gcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

int main(void)
{

    int a, b, x, y;
    cin >> a >> b;
    cout << "gcd -> " << extended_gcd(a, b, &x, &y) << endl;
    cout << "coeffs -> " << x << ", " << y << endl;

    return 0;
}