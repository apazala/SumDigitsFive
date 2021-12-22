#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int sum = 0;
	int d;
	while (n>0) {
		d = n % 10;
		sum += d;
		n /= 10;
	}

	printf("%d\n", sum);

	return 0;
}