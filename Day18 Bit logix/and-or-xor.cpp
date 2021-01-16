#include <bits/stdc++.h>

using namespace std;

#define and_(x, y) (x & y)
#define or_(x, y) (x | y)
#define xor_(x, y) (x ^ y)

int main(void)
{
    int x = 5, y = 2;
    //Bitwise AND
    cout << and_(x, y) << endl;
    //Bitwise OR
    cout << or_(x, y) << endl;
    //Bitwise XOR
    cout << xor_(x, y) << endl;
    return 0;
}