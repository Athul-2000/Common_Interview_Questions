#include <stdio.h>

int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int size_of_arr = sizeof(arr)/sizeof(int);
	int new_arr[size_of_arr];
	int even_index = 0;
	int odd_index = size_of_arr - 1;
	for(int i = 0; i < size_of_arr; i++){
		if(arr[i] % 2 == 0){
			new_arr[even_index] = arr[i];
			even_index ++;
		}
		else{
			new_arr[odd_index] = arr[i];
			odd_index --;
		}
	}
	for(int j = 0; j < size_of_arr; j++){
		printf("%d ", new_arr[j]);
	}
	return 0;
}