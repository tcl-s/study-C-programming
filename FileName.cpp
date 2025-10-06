#include <stdio.h>
int main() {
	long long arr[10] = {4122,57456,67846,646,64687,43768,4348766,5656,534,4555};
	for(int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	return 0;
	/*int a;
	scanf_s("%d", &a);
	int b;
	scanf_s("%d", &b);
	int c = a / b;
	printf("%d", c);*/
	return 0;
}