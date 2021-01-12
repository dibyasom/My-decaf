#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(void)
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0, pos = 0, neg = 0;
        vector<char> state(1000000, );
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            pos = 0;
            neg = 0;
            for (int j = 0; j < m; j++)
            {
                int temp;
                cin >> temp;
                if (temp < 0)
                    neg++;
                else
                    pos++;
            }
            sum += pos * neg;
        }
        cout << sum << endl;
        // cout << (pos * neg) << endl;
    }
    return 0;
}