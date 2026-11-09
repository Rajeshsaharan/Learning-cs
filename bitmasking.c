#include <stdio.h>
#include <stdbool.h>


int main(){
	//extracting last digit of anydecimal number 

	//https://leetcode.com/discuss/post/3695233/all-types-of-patterns-for-bits-manipulat-qezp/
	//https://codeforces.com/blog/entry/73490


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

	//left shift value << positon 
	//right shift value >> positoin 
	//example 1 << 4 means 00000001 -> 00001000 
	//example 2 << 4 means 00000010  -> 00100000 
	//example 2 >> 4 means first write 2 in binary and than shift all bits to right by pos value

}