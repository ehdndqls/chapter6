#include<stdio.h>
int main() {
	int age, height;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	if (height >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.\n");
	else
		printf("�˼��մϴ�.\n");

	return 0;
}