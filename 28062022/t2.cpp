#include <bits/stdc++.h>
using namespace std;

bool modularArithmaticCheck(int x, int a, int b){
    // x = a (mod b)
    double c1 = ( x - a ) / (double)b;
    int c2 = ( x - a ) / (double)b;
    return c1==c2;
}
main(){
    int x,a,b;
    cin >> x >> a >> b;
    bool res = modularArithmaticCheck(x,a,b);
    cout << x << " = " << a << " mod " << b << " : " <<  ((res)?"true":"false") << endl;
}