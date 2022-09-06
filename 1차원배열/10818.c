#include <stdio.h> 

int main(void) {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	int num;
	
	for (int i = 0; i < n; i++) {

		scanf("%d", &num);
		arr[i] = num;

	}


	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < n; i++) {

		if (min > arr[i]) 
			min = arr[i];
        
		if (max < arr[i])
		    max = arr[i];
		
	}

	printf("%d %d", min, max);


	return 0;
}
