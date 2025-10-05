#include <stdio.h>
int main() {
	int min;
	int max;
	scanf_s("%d", &min);
	scanf_s("%d", &max);
	int i = min;
	int enable = 0;
	for (i; i <= max; i += 2) {
		if (i % 2 == 0) {
			i++;
		}
		else {
			//pass
		}
		for (int j = 3; j*j <= i; j += 2) {
			if (i % j == 0) {
				enable++;
				break;
			}
			else {
				//pass
			}
		}
		if (enable == 0) {
			printf("%d\n", i);
		}
		else {
			enable = 0;
		}
	}
	return 0;
}