#include <bits/stdc++.h>
using namespace std;

main(){
    int arr[15] = {1,2,3,4,5,1,2,3,4,5,11,12,13,14,15};
    int max = arr[0];
    int cnt = 1;
    for (int i = 1; i < 15; i++)
    {
        cnt++;
        if(arr[i]>max){ cnt++;max = arr[i]; }
    }
    
    cout << "Maximum: " << max << endl;
    cout << "Count: "<< cnt << endl;
}