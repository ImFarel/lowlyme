#include<stdio.h>

// unsigned int multiply(unsigned int x, unsigned int y) {
// 	if (x == 1)
// 	{
// 		return y;
// 	}
// 	else if (x > 1) {
// 		return y + multiply(x - 1, y);
// 	}

// 	return 0;
// }


// int main() {
// 	printf("3 x 5 is %d\n", multiply(3, 5));
// 	return 0;
// }


unsigned int factorial(unsigned int x) {
	if (x > 1) {
		return factorial(x - 1) * x;
	}

	return 1;
}

int main() {
	printf("0! = %d\n", factorial(0));
	printf("1! = %d\n", factorial(1));
	printf("2! = %d\n", factorial(2));
	printf("3! = %d\n", factorial(3));
	printf("4! = %d\n", factorial(4));
	printf("5! = %d\n", factorial(5));

	return 0;
}