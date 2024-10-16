#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int checkAnna(int arr[], int size);

int main(){
	int arr[100];
	int size;
	inputArr(arr, &size);
	outputArr(arr, size);
	if(checkAnna(arr, size)){
		printf("Arr is Anna");
	}else{
		printf("Arr is not Anna");
	}
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

int checkAnna(int arr[], int size){
	int i, half = (size - 1) / 2;
	for(i = 0; i <= half; i++){
		if(arr[i] != arr[(size - 1) - i]){
			return 0;
		}
	}
	return 1;
}
