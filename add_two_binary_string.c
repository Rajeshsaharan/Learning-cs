#include <stdio.h>


//adding using 
long long int add(int a, int b){
	while(b != 0){
		int carry = (a & b ) << 1;
		a = a ^ b;
		b = carry;
	}
	return a;
}


//subtract
long long int sub(int a , int b){
	return add(a, add(~b, 1));
}

//int multiply

long long int multi(int a, int b){
	long long int result = 0;
	while(b != 0){
		if(b & 1ULL) result += a;
		a <<= 1;
		b >>= 1;
	}
	return result;
}

int main(){
	long long int a = 100;
	long long int b = 150;
	printf("%lld\n", add(a,b));

	//THERE ARE NO OFFICAL SUBTRACT IN CS 
	//TO REPRESENT ANY NUMBER TO - JUST 
	// INVERT ALL BIT AND ADD 1 TO THAT
	printf("%lld\n", sub(a,b));
	//AND HOW THE ALL SUB OPERATION WORKS
	a = 300 ; b =400;
	// suppose i want to subtract a - b then i can do it
	printf("%lld\n", add(a , (~b + 1)));

	//to represnt any negative number to positive just negate and add + 1;
	int x = -123323;
	printf("%d\n", ~x + 1);

	//multiply
	printf("%lld\n", multi(a, b));



}
