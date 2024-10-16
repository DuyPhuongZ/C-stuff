#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int deleteStrByPos(char str[], int *size, int pos);

int main(){
	char str[100];
	int pos;
	
	printf("Input something: ");
	gets(str);
	
	int size = strlen(str);
	printf("size: %d\n", size);
	
	printf("Input pos: ");
	scanf("%d", &pos);
	
	printf("Before: \n");
	printf("%s\n", str);
	
	printf("After: \n");
	if(deleteStrByPos(str, &size, pos)){
		printf("%s\n", str);
	}else{
		printf("Khong xoa duoc\n"); 
	}
	return 0;
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
