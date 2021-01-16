#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    int len = encoded.size() + 1;
    vector<int> arr(len);
    arr[0] = first;
    for (int i = 1; i < len; i++)
    {
        arr[i] = arr[i - 1] ^ encoded[i - 1];
    }

    return arr;
}
int main(void)
{

    return 0;
}