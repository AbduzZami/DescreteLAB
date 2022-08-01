#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    int cnt = 0;
        for (int i = 1; i < n; ++i) {
            cnt++;
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                cnt++;
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    cout << "Count: " << cnt << endl;
}

main(){
    int arr[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    insertion_sort(arr,15);
    for (int i = 0; i < 15; i++){cout << arr[i] << " ";} cout << endl;
    return 0;
}