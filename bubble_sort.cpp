#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {34, 22, 12, 45, 67, 56};
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 -i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}