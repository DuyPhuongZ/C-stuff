#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
	char str[100];
	printf("Input something: ");
	gets(str);
	int size = strlen(str);
	printf("%s\n", str);
	normalize(str);
	printf("%s\n", str);
	return 0;
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
