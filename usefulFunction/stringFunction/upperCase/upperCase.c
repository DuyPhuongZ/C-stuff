#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upperCase(char str[], int size);

int main(){
	char str[100];
	printf("Input something: ");
	gets(str);
	int size = strlen(str);
	printf("Before: \n");
	printf("%s\n", str);
	upperCase(str, size);
	printf("After: \n");
	printf("%s\n", str);
	return 0;
}

void upperCase(char str[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}
}
