#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size;i++){
       if(arr[i] > max)
           max = arr[i];
       if (arr[i] < min)
           min = arr[i];
    }
    cout << "Max : " << max << endl << "Min : " << min;
}