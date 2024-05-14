#include <stdio.h>


typedef struct { int x; int y; }point;



void addone(int* a) {
	(*a)++;
}
void move(point* p) {}
int main() {
	int n = 2;
	printf("Before: %d\n", n);
	addone(&n);
	printf("After: %d\n", n);

	return 0;
}
