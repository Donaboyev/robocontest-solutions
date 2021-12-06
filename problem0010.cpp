#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << ((n > (a + b + c)) ? "No" : "Yes");
    
    return 0;
}