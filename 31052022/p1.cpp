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

// #define int long long int

vector<int> Union(int n, int m, vector<int> arra, vector<int> arrb)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp[arra[i]] == 0)
        {
            ans.push_back(arra[i]);
            
        }mp[arra[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[arrb[i]] == 0)
        {
            ans.push_back(arrb[i]);
            
        }mp[arra[i]]++;
    }
    return ans;
}

vector<int> Intersection(int n, int m, vector<int> arra, vector<int> arrb)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp[arra[i]] == 1)
        {
            ans.push_back(arra[i]);
            
        }mp[arra[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[arrb[i]] == 1)
        {
            ans.push_back(arrb[i]);
            
        }mp[arra[i]]++;
    }
    return ans;
}

vector<int> AminusB(int n, int m, vector<int> arra, vector<int> arrb)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        mp[arrb[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[arra[i]] == 0)
        {
            ans.push_back(arra[i]);
            
        }
    }
    return ans;
}

main()
{
    hutaya fala int n, m;
    cin >> n >> m;
    vector<int> arra, arrb;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arra.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arrb.push_back(x);
    }

    cout << endl;

    vector<int> ansunion = Union(n, m, arra, arrb);
    cout << "A U B" << endl;
    for (int i = 0; i < ansunion.size(); i++)
    {
        cout << ansunion[i] << " ";
    }

    cout << endl << endl;

    vector<int> ansintersection = Intersection(n, m, arra, arrb);
    cout << "A ^ B" << endl;
    for (int i = 0; i < ansintersection.size(); i++)
    {
        cout << ansintersection[i] << " ";
    }

    cout << endl << endl;

    vector<int> ansminus = AminusB(n, m, arra, arrb);
    cout << "A - B" << endl;
    for (int i = 0; i < ansminus.size(); i++)
    {
        cout << ansminus[i] << " ";
    }

    cout << endl << endl;


    vector<int> ansminusba = AminusB(m, n, arrb, arra);
    cout << "B - A" << endl;
    for (int i = 0; i < ansminusba.size(); i++)
    {
        cout << ansminusba[i] << " ";
    }

    cout << endl << endl;

    vector<int> symdiff = Union(ansminus.size(), ansminusba.size(), ansminus, ansminusba);
    cout << "A symdiff B" << endl;
    for (int i = 0; i < symdiff.size(); i++)
    {
        cout << symdiff[i] << " ";
    }


    return 0;
}