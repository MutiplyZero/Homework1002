#include <stdio.h>
int main() {
	float weight, height, bmi;
	printf("��J�魫(����):");
	scanf_s("%f",&weight);
	printf("��J����(��):");
	scanf_s("%f", &height);
	bmi = weight / (height * height);
	printf("�A��bmi�ƭȬ�:%.2f\n", bmi);
	if (bmi < 18.5) {
		printf("�L��\n");
	}
	else if (bmi < 24.9) {
		printf("���q\n");
	 }
	else if (bmi < 29.9) {
		printf("�L��\n");
	}
	else {
		printf("�έD\n");
	}
	return 0;

}