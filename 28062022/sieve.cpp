#include <bits/stdc++.h>
using namespace std;

bool dp[10000000];
main()
{
    int t = 100;
    int n = 10;
    cout << "x" << "\t" << "count" << "\t" << "x/ln(x)" << "\t" << "x/(ln(x)-1)" <<  endl;
    cout << "---------------------------------------------" << endl;
    while (t--)
    {
        memset(dp, true, sizeof(dp));
        dp[1] = false;

        n+=100;

        for (int i = 4; i <= n; i += 2)
        {
            dp[i] = false;
        }

        for (int i = 3; i <= sqrt(n); i++)
        {
            for (int j = 2; j <= n; j++)
            {
                dp[i * j] = false;
            }
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dp[i])
            {
                cnt++;
                // cout << i << " ";
            }
        }
        cout << n << "\t" << cnt << "\t" << round(n/log(n)) << "\t" << round(n/(log(n)-1)) <<  endl;
    }
}