#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void displayArray(int arr[], int a) {
	for (int i = 0; i < a; i++) {
		printf("%d:%d\n", i+1,arr[i]);
	}
	return;
}
int main(void) {
	srand(time(NULL));
	int arr[90];
	int num;
	int count = 0;
	arr[0] = rand() % 100 + 1;
	for (int i = 1; i <= 89; i++) {
		count = 0;
		num = rand() % 100 + 1;
		for (int j = 0; j <= i-1; j++) {
			if (num == arr[j]) {
				i--;
				count++;
				break;
			}
			else {
				//pass
			}
		}
		if (count == 0) {
			arr[i] = num;
		}
		else {
			//pass
		}
	}
	displayArray(arr, 90);
	int sigma=0;
	for (int i = 0; i < 90; i++) {
		sigma += arr[i];
	}
	float ave = sigma / 90;
	int arr_1[60];
	int j = 0;
	for (int i = 0; i < 90; i++) {
		if (arr[i] > ave) {
			arr_1[j] = arr[i];
			j++;
		}
		else {
			//pass
		}
	}
	printf("The average number of the array is:%f\n", ave);
	displayArray(arr_1, j);
	printf("%d\n", j);
	return;
}