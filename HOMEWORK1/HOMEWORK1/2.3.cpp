#include <stdio.h>
int main() {
	int a, b, c;
	printf("�п�J�T�Ӿ��");
	scanf_s("%d %d %d", &a, &b, &c);
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	int min = a;
	if (b < min)  min = b;
	if (c < min)  min = c;
	printf("�̤j�Ƭ�:%d\n", max);
	printf("�̤p�Ƭ�:%d\n", min);
}