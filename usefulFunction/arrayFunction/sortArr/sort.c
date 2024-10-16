#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
void sort(int arr[], int size);

int main(){
	int arr[100];
	int size;
	inputArr(arr, &size);
	outputArr(arr, size);
	sort(arr, size);
	outputArr(arr, size);
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

void sort(int arr[], int size){
	int i, j;
	for(i = 0; i <= size - 2; i++){
		for(j = i + 1; j <= size - 1; j++){
			if(arr[i] > arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
