#include <stdio.h>
#include <stdbool.h>


int main(){
	//extracting last digit of anydecimal number 

	int n = 1234;
	while(n > 0){
		int last_digit = n % 10;
		printf("%d\n", last_digit);
		n /= 10;
	}

	//we can extract same as binary number
	int x = 16;
	while(x > 0){
		int lsb = x % 2;
		printf("%d", lsb);
		x /= 2;
	}
}