#include <bits/stdc++.h>

using namespace std;

#define lshift(x, y) (x << y)
#define rshift(x, y) (x >> y)
#define negation(x) (~x)

int main(void)
{

    int x = 7, y = 2;
    // Left shfit
    cout << lshift(x, y) << endl;
    // Right shift
    cout << rshift(x, y) << endl;

    unsigned int z = 5;
    // Unsigned negation
    cout << negation(z) << endl;
    // Signed negation
    cout << negation(x) << endl;

    return 0;
}