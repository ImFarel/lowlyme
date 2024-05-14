#include <stdio.h>

/* define the person struct here using the typedef syntax */
typedef struct {
	char *name;
	int age;
} person;


int main() {
	person john;

	/* testing code */
	john.age = 27;
	john.name = "John";
	printf("%s is %d years old.\n", john.name, john.age);
}







// typedef struct {
// 	int x;
// 	int y;
// } point;

// void draw(point p);


// int main() {
// 	point p;

// 	p.x = 10;
// 	p.y = 9;

// 	draw(p);

// 	return 0;
// }

// void draw(point p) {
// 	printf("Drawing a point at coordinates (%d, %dll)\n", p.x, p.y);
// }