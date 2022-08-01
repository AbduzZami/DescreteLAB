#include <bits/stdc++.h>
using namespace std;


string generate_nextpermutation(string a)
{
    int n = a.size();
    int j = n - 2;
    while (a[j] > a[j + 1])
    {
        j--;
    }
    int k = n - 1;
    while (a[j] > a[k])
    {
        k--;
    }
    swap(a[j], a[k]);
    int r = n - 1;
    int s = j + 1;
    while (r > s)
    {
        swap(a[r], a[s]);
        r--;
        s++;
    }

    return a;
}

main()
{
    int t = 100;
    while (t--)
    {
        string a;
        cin >> a;
        cout << generate_nextpermutation(a) << endl;
    }
}