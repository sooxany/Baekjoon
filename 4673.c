#include <stdio.h>

int d(int n) { // ���� �ѹ��� �ƴ� ���� ���ϴ� �Լ�
	int sum = n; // n�� 33, sum���ٰ� 33 �Ҵ�

	while (n > 0) {
		sum += n % 10; // sum�� 36 sum�� 39
		n /= 10;  //n�� 3

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