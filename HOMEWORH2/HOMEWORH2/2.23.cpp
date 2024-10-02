#include <stdio.h>
int main() {
	int num;
	printf("叫块俱计:");
	scanf_s("%d", &num);
	if (num % 2 == 0) { printf("%d 琌案计.\n", num); }
	else { printf("%d 琌计.\n", num); }
	return 0;
}