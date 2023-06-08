#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    bool flag = false;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        if (x == arr[mid])
        {
            flag = true;
            break;
        }
        // 1 2 3 4 5
        if (x > arr[mid])
        {

            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}