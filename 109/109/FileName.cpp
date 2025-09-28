#include<stdio.h>
int main() {
	int arr[] = { 7,23,79,81,103,121,137 };
	int min = 0;
	int max = sizeof(arr)/sizeof(int)-1;
	int find;
	scanf_s("%d", &find);
	int count = 0;
	int N = 0;
	while (1) {
		int mid = (max + min) / 2;
		if (find > arr[mid]) {
			min = mid;
		}
		else {
			max = mid;
		}
		if (arr[min] == find) {
			break;
		}
		else {
			//pass
		}
		if(max - min <= 1){
			count++;
		}
		else {
			//pass
		}
		if(count == 10) {
			N++;
			break;
		}
		else {
			//pass
		}
	}
	if(N == 0) {
		printf("Found\n");
	}
	else {
		printf("Not Found\n");
	}
	return 0;
}