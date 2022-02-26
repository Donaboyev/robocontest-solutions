#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {2, 434, 4343, 43323, 423434};
    int min = a[0];

    for (int i : a)
    {
        if (min > i)
        {
            min = i;
        }
    }

    cout << min;

    return 0;
}
