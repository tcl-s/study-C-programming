#include <stdio.h>
void display(int a ,int b[]) {
	for (int i = 1; i <= a; i++) {
		printf("%d\n", b[i-1]);
	}
	return;
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int a = arr[0];
	int b = arr[2];
	int c = arr[4];
	/*display(5, arr[5]);*/
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", arr[0]);
	int sigma = a + b + c;
	printf("%d\n", sigma);
	arr[4] = 10;
	printf("%d\n", arr[4]);
	/*display(5, arr[5]);*/
	return 0;
}