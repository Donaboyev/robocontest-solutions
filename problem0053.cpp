#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << ((n == 1 || n == 2) ? 0 : (n * (n - 3) / 2));

    return 0;
}