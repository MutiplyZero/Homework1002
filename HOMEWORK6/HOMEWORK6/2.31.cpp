#include <stdio.h>
int main() {
	int number;
	printf("數字\t 平方\t 三次方\n");
	for (number = 0; number <= 10; number++) {
		printf("%d\t%d\t%d\n", number, number * number, number * number * number);
	}
	return 0;
	}
