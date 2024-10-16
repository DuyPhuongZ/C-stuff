#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nameNormalize(char str[], int size);
void normalize(char *str);
void upperCase(char str[], int size);
void lowerCase(char str[], int size);

int main(){
	char str[100];
	printf("Input something: ");
	gets(str);
	int size = strlen(str);
	printf("Before: \n");
	printf("%s\n", str);
	nameNormalize(str, size);
	printf("After: \n");
	printf("%s\n", str);
	return 0;
}

void nameNormalize(char str[], int size){
	int i;
	//chuan hoa
	normalize(str);
	//dua het ve chu lowerCase
	for(i = 0; i <= size - 1; i++){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
	}
	//neu chu cai dau la viet thuong thi chuyen no thanh viet hoa
	if(str[0] >= 97 && str[0] <= 122){
		str[0] -= 32;
	}
	//neu sau dau cach la mot chu thuong thi chuyen no thanh viet hoa
	for(i = 1; i <= size - 1; i++){
		if(str[i - 1] == 32 && (str[i] >= 97 && str[i] <= 122)){
			str[i] -= 32;
		}
	}
}

void normalize(char *str) {
    int len;
    char *token;

    token = strtok(str, " ");
    
    while (token)
    {
        len = strlen(token);
        strcpy(str, token);
        str[len] = ' ';
        str += len + 1;
        token = strtok(0, " ");
    }

    if (len){
        *str = '\0';
	}
}

void upperCase(char str[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}
}

void lowerCase(char str[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
	}
}
