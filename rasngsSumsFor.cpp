// Given 2 numbers N and Q , an array A of N number and Q number of pairs L , R. For each query Q print a single line that contains the summation of all numbers from index L to index R.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, l, r;
    cin >> n;
    cin >> q;
    // cout << n << " " << q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> l;
        cin >> r;
        int sums = 0;
        for (int j = l - 1; j < r; j++)
        {
            sums += arr[j];
        };

        cout << sums << endl;
    }

    return 0;
}