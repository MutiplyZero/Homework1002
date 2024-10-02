#include <stdio.h>
int main() {
	int a, b, c;
	printf("叫块俱计");
	scanf_s("%d %d %d", &a, &b, &c);
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	int min = a;
	if (b < min)  min = b;
	if (c < min)  min = c;
	printf("程计:%d\n", max);
	printf("程计:%d\n", min);
}