#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lowerCase(char str[], int size);

int main(){
	char str[100];
	printf("Input something: ");
	gets(str);
	int size = strlen(str);
	printf("Before: \n");
	printf("%s\n", str);
	lowerCase(str, size);
	printf("After: \n");
	printf("%s\n", str);
	return 0;
}

void lowerCase(char str[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
	}
}
