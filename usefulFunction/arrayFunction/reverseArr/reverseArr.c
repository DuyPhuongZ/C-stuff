#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
void reverseArr(int arr[], int size);

int main(){
	int arr[100];
	int size;
	inputArr(arr, &size);
	outputArr(arr, size);
	reverseArray2(arr, size);
	printf("After: \n");
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

void reverseArr(int arr[], int size){
	int i, half = (size - 1) / 2;
	for(i = 0; i <= half; i++){
		int tmp = arr[i];
		arr[i] = arr[(size - 1) - i];
		arr[(size - 1) - i] = tmp;
	}
} 
