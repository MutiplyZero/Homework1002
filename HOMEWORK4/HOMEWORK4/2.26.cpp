#include <stdio.h>
int main(){
int num1,num2;
printf("��J��Ӿ��:");
scanf_s("%d%d", &num1, &num2);
if (num2 != 0 && num1 % num2 == 0) {
	printf("%d�O%d������", num1, num2);
}
else {
	printf("%d���O%d������", num1, num2);
}
return 0;
}