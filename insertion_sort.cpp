#include<bits/stdc++.h>
using namespace std;

const int N = 8;

int main(){
	int arr[N] = {22, 33 , 88 , 11, 66, 77, 99, 55};

	for(int i = 2; i <= N; i++){
		int temp = arr[i];
		int ptr = i - 1;
		while(temp < arr[ptr]){
			arr[ptr + 1] = arr[ptr];
			ptr--;
		}
		arr[ptr + 1] = temp;
	}

	for(int i = 0; i < N; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}