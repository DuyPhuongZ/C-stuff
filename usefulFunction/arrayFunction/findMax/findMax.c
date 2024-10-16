#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int findMax(int arr[], int size);

int main(){
	int arr[100];
	int size;
	inputArr(arr, &size);
	outputArr(arr, size);
	int result = findMax(arr, size);
	printf("Result: %d", result);
	return 0;
}

void inputArr(int arr[], int *size){
	int i;
	printf("Input size: ");
	scanf("%d", size);
	for(i = 0; i <= *size - 1; i++){
		printf("Input arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

void outputArr(int arr[], int size){
	int i;
	for(i = 0; i<= size - 1; i++){
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}

int findMax(int arr[], int size){
	int i, max = arr[0];
	for(i = 0; i <= size - 1; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
