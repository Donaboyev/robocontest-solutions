#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a[5], min = 0, max = 0, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
        if (min >= a[i])
        {
            min = a[i];
        }
        sum += a[i];
    }
    cout << sum - max << " " << sum - min;

    return 0;
}