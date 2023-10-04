#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 35, 45};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[size1 + size2];
    for (int i = 0; i < size1;i++){
        arr3[i] = arr1[i];
    }
    for (int i = size2; i < size1 + size2;i++){
        arr3[i] = arr2[i - size1];
    }

    // sort(arr3, arr3 + (size1 + size2));
    for (int i = 1; i < size1 + size2;i++){
        for (int j = 0; j < (size1 + size2) - i;j++){
            if(arr3[j] > arr3[j+1]){
                int temp = arr3[j + 1];
                arr3[j + 1] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    cout << "Mergered Array : ";
    for (int i = 0; i < size1 + size2;i++){
        cout << arr3[i] << " ";
    }
        return 0;
}