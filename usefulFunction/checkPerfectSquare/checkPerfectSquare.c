#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPerfectSquare(int n);

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(checkPerfectSquare(n)){
		printf("%d is perfect square number", n);
	}else{
		printf("%d is not perfect square number", n);
	}
	return 0;
}

int checkPerfectSquare(int n){
	float canbac2 = sqrt(n);
	int phannguyen = (int)canbac2;
	if(phannguyen * phannguyen == n){
		return 1;
	}else{
		return 0;
	}
}
