#include <stdio.h>
int main() {
	int num;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &num);
	if (num % 2 == 0) { printf("%d �O����.\n", num); }
	else { printf("%d �O�_��.\n", num); }
	return 0;
}