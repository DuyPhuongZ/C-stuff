#include <stdio.h>
#include <stdlib.h>

int checkPrime(int n); 

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(checkPrime(n)){
		printf("%d is even number", n);
	}else{
		printf("%d is not even number", n);
	}
	return 0;
}

int checkPrime(int n){
	return n % 2 == 0 ? 1 : 0;
}

int checkPrime(int n){
	if(n % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}
