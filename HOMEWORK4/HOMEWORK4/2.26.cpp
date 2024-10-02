#include <stdio.h>
int main(){
int num1,num2;
printf("輸入兩個整數:");
scanf_s("%d%d", &num1, &num2);
if (num2 != 0 && num1 % num2 == 0) {
	printf("%d是%d的倍數", num1, num2);
}
else {
	printf("%d不是%d的倍數", num1, num2);
}
return 0;
}