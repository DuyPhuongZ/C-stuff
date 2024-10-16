#include <stdio.h>
#include <stdlib.h>

void trim(char str[], int *size);
int deleteStrByPos(char str[], int *size, int pos);

int main(){
	
	return 0;
}

void trim(char str[], int *size){
	
}

int deleteStrByPos(char str[], int *size, int pos){
	int i;
	if(pos < 0 || pos > *size - 1){
		return 0;
	}
	for(i = pos; i <= *size - 1; i++){
		str[i] = str[i + 1];
	}
	return 1;
}
