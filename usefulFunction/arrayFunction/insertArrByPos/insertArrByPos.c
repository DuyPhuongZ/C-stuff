#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
int insertArrByPos(int arr[], int *size, int pos, int n);

int main(){
	int arr[100];
	int size, pos, n;
	
	inputArr(arr, &size);
	outputArr(arr, size);
	
	printf("Input pos: ");
	scanf("%d", &pos);
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("After: \n");
	if(insertArrByPos(arr, &size, pos, n)){
		outputArr(arr, size);
	}else{
		printf("Khong them duoc");
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

int insertArrByPos(int arr[], int *size, int pos, int n){
	int i;
	if(pos < 0 || pos > *size){
		return 0;
	}
	for(i = *size - 1; i >= pos; i--){
		arr[i + 1] = arr[i];
	}
	arr[pos] = n;
	(*size) = (*size) + 1;
	return 1;
}
