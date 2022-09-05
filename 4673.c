#include <stdio.h>

int d(int n) { // 셀프 넘버가 아닌 수를 구하는 함수
	int sum = n; // n이 33, sum에다가 33 할당

	while (n > 0) {
		sum += n % 10; // sum은 36 sum은 39
		n /= 10;  //n은 3

	}

	return sum;  //39

}


int main(void) {

	int arr[10001] = { 0, };
	int cheak;

	for (int i = 0; i < 10001; i++) {

		cheak = d(i);
		if (cheak < 10001) {
			arr[cheak] = 1;
		}

	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 1) {
			printf("%d\n", i);
		}
	}

	return 0;
}