#include<stdio.h>
int main() {
	int divisor, dividend;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &dividend);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &divisor);

	if (dividend % divisor == 0) 
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");

	return 0;
}