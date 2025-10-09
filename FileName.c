#include <stdio.h>
int square(int x,int y) {
	return (x - y)* (x - y);
}
int main() {
	int a;
	int b;
	int c;
	int d; 
	int e;
	int f;
	scanf_s("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	int ave = (a + b + c + d + e + f) / 6;
	int result = (square(a, ave) + square(b, ave) + square(c, ave) + square(d, ave) + square(e, ave) + square(f, ave))/6;
	printf("%d", result);
	return 0;
}