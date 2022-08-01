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
    int ball = 24;
    bool flag = true;
    int turn = 1;
    while (ball)
    {
        cout << "Player 1 take balls between 1 to 4:\n";
 
        int x;
        cin >> x;
        ball -= x;
        if (ball == 0)
        {
            cout << "Player 1 wins\n";
            break;
        }
        // turn = 2;
        
        if(ball%5==0){cout << "Player 2 has taken " << 1 << " balls\n";
            ball-= 1;
            
        }else{
            cout << "Player 2 has taken " << ball%5 << " balls\n";
            ball -= ball%5;
            
        }

        // turn = 1;

        if(ball==0){
            cout << "Player 2 wins\n";
            break;
        }
        
        cout << "Remaining balls are " << ball << endl;
    }
    // cout << (flag?"Player 1":"Player 2") << endl;

    return 0;
}