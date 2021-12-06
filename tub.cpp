#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(ll number) {
    for(int i = 2; i< sqrt(number);i++){
        if(number%i==0)
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b,sum=0,count=0;
    cin >> a >> b;

    for(ll i = a; i<=b;i++) {
        if(isPrime(i)) {
            sum+=i;
            count++;
        }
    }

    cout<< sum/count;
    
    return 0;
}

