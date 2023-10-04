#include<iostream>
#include<algorithm> // swap
#include<bits/stdc++.h> // sort
using namespace std;

bool checkArray(int arr1[],int arr2[],int n,int x){
    if(n!=x)
        return false;
    // sort(arr1, arr1 + n);
    // sort(arr2, arr2 + x);

    for (int i = 1; i < n;i++){
        for (int j = 0; j < n - i;j++){
            if(arr1[j] > arr1[j+1]){
                int temp = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    sort(arr2, arr2 + x);

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
        }
    return true;
}

int main(){
    int arr1[] = {5,4,3,2,1};
    int arr2[] = {5, 6, 3, 2, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int x = sizeof(arr2) / sizeof(arr2[0]);
    checkArray(arr1, arr2, n, x) ? cout << "Equal" : cout << "No";
}