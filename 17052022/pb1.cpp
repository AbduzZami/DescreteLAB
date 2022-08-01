#include <bits/stdc++.h>
using namespace std;

#define ll     long long
#define ull    unsigned long long
#define YES    cout << "YES\n"
#define NO     cout << "NO\n"
#define nn     cout<<endl;
#define LL_INF (1LL << 62)
#define INF    (1 << 30)
#define mod    1000000007
#define N7     10000007
#define N5     100005
#define hutaya ios_base::sync_with_stdio(false);
#define fala cin.tie(NULL);

#define int long long int
// p^q -> qvp
bool implication(bool p, bool q){
    if(p == false) return true;
    else if(p == true) return q;
}
main(){
    hutaya fala
    bool a,b,c,d,e;
    bool p,q;
    

    p = q = false;
    a = p&&q;
    b = p||q;
    c = implication(a,b);
    cout << "p" << " " << "q" << " " << "p^q" << " " << "pvq" << " " << "p^q->qvp" << endl;
    cout << a << " " << b << " " << c << endl;

    cout << endl;

    p = false; q = true;
    a = p&&q;
    b = p||q;
    c = implication(a,b);
    cout << p <<" "<< q << " " << a << " " << b << " " << c << endl;

    cout << endl;

    p = true; q = false;
    a = p&&q;
    b = p||q;
    c = implication(a,b);
    cout << p <<" "<< q << " "<< a << " " << b << " " << c << endl;

    cout << endl;

    p = true; q = true;
    a = p&&q;
    b = p||q;
    c = implication(a,b);
    cout << p <<" "<< q << " "<< a << " " << b << " " << c << endl;
    return 0;
}