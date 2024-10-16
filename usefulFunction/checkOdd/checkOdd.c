#include <stdio.h>
#include <stdlib.h>

int checkOdd(int n);

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(checkOdd(n)){
		printf("%d is odd number", n);
	}else{
		printf("%d is not odd number", n);
	}
	return 0;
}

int checkOdd(int n){
	return n % 2 != 0 ? 1 : 0;
}

int checkOdd(int n){
	if(n % 2 != 0){
		return 1;
	}else{
		return 0;
	}
}
