#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x;
    cin >> x;
    cout << (pow(x, 5) + 8 * pow(x, 4) - 5 * pow(x, 3) + 3 * x * x + x - 12);

    return 0;
}
