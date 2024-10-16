#include <stdio.h>
#include <stdlib.h>

int checkPrime(int n);

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(checkPrime(n)){
		printf("%d is prime number", n);
	}else{
		printf("%d is not prime number", n);
	}
	return 0;
}

int checkPrime(int n){
	int i;
	if(n >= 2){
		for(i = 2; i <= n - 1; i++){
			if(n % i == 0){
				return 0;
			}
		}
	}else{
		return 0;
	}
	return 1;
}
