#include <stdio.h>
int main() {
	float weight, height, bmi;
	printf("輸入體重(公斤):");
	scanf_s("%f",&weight);
	printf("輸入身高(米):");
	scanf_s("%f", &height);
	bmi = weight / (height * height);
	printf("你的bmi數值為:%.2f\n", bmi);
	if (bmi < 18.5) {
		printf("過輕\n");
	}
	else if (bmi < 24.9) {
		printf("普通\n");
	 }
	else if (bmi < 29.9) {
		printf("過重\n");
	}
	else {
		printf("肥胖\n");
	}
	return 0;

}