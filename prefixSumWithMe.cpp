#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> arr(n + 1);
    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;

        cout << arr[r] - arr[l - 1] << endl;
    }

    return 0;
}