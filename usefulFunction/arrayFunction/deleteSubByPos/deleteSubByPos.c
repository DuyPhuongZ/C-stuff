#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int deleteSubByPos(int arr[], int *size, int pos, int amount);

int main(){
	int arr[100];
	int size, pos, amount;
	printf("Input arr: \n");
	inputArr(arr, &size);
	outputArr(arr, size);
	printf("Input pos: ");
	scanf("%d", &pos);
	printf("Input amount: ");
	scanf("%d", &amount);
	printf("After: \n");
	if(deleteSubByPos(arr, &size, pos, amount)){
		outputArr(arr, size);
	}else{
		printf("Khong xoa duoc");
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

int deleteSubByPos(int arr[], int *size, int pos, int amount){ // 3 7 3 1 5 6
	int i;
	if(pos < 0 || pos > *size - amount){
		return 0;
	}
	for(i = pos; i <= *size - 1; i++){
		arr[i] = arr[i + amount];
	}
	(*size) = (*size) - amount;
	return 1;
}
