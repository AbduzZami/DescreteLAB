#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn cout << endl;
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define mod 1000000007
#define N7 10000007
#define N5 100005
#define hutaya ios_base::sync_with_stdio(false);
#define fala cin.tie(NULL);

#define int long long int
main()
{
    hutaya fala
        // VxEyP(x,y)=x+y>5
    int n, m;
    cin >> n >> m;
    int arrx[n];
    int arry[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arrx[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arry[i];
    }

    
    bool mainflag = false;
    for (int i = 0; i < m; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arry[i] + arrx[j] <= 5)
            {
                // cout << true << endl;
                flag = false;
                // break;
            }
        }
        if(flag)
        {
            mainflag = true;
            break;
        }
    }
    cout << mainflag << endl;

    return 0;
}