#include <bits/stdc++.h>
using namespace std;

main(){
    int arr[15] = {1,7,8,12,2,3,4,5,6,9,10,11,13,14,15};
    int x;
    cin >> x;
    int ind = 0;
    int cnt = 0;
    for (int i = 0; i < 15; i++)
    {
        cnt++;
        if(arr[i]==x) {ind =i+1;break;}
    }
    
    cout << "Index: " << ind << endl;
    cout << "Count: " << cnt << endl;
}