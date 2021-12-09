#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b && b >= c) || (c >= a && b >= a && c >= b))
    {
        cout << abs(a - c);
    }
    else if ((a >= b && c >= b && a >= c) || (b >= a && c >= a && b >= c))
    {
        cout << abs(a - b);
    }
    else
    {
        cout << abs(c - b);
    }
    return 0;
}