#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int deleteArrByPos(int arr[], int *size, int pos);

int main(){
	int arr[100];
	int size, pos;
	inputArr(arr, &size);
	outputArr(arr, size);
	printf("Input pos: ");
	scanf("%d", &pos);
	printf("After: \n");
	if(deleteArrByPos(arr, &size, pos)){
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

int deleteArrByPos(int arr[], int *size, int pos){ // 3 7 3 1 5 6
	int i;
	if(pos < 0 || pos > *size - 1){
		return 0;
	}
	for(i = pos; i <= *size - 1; i++){
		arr[i] = arr[i + 1];
	}
	(*size) = (*size) - 1;
	return 1;
}
