#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        cnt++;
        for (int j = 0; j < n-i-1; j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                cnt++;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Count: " << cnt << endl;
}

main(){
    int arr[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    bubble_sort(arr,15);
    for (int i = 0; i < 15; i++){cout << arr[i] << " ";} cout << endl;
}