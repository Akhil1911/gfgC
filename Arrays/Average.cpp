#include<iostream>
using namespace std;
int main(){
    float sum = 0;
    float avg = 0;
    float arr[] = {10, 15, 23, 28, 53, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n;i++){
        sum += arr[i];
    }
    avg = sum / n;
    cout << sum << endl;
    cout << avg;
}