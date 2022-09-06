#include <stdio.h> 

int main(void) {
	
	int arr[100] = { 0, };
	int num[100] = { 0, };
	int rest;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	    rest = arr[i] % 42;
		num[rest]++;

	}

	for (int j = 0; j < 42; j++) {
		
		
		if (num[j] != 0) {
			count++;
		}
	
	}

	printf("%d", count);
	
	return 0;
}
