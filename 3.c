#include<stdio.h>
int main() {
	int x, y, z, min;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
		if (y > z)
			min = z;
		else
			min = y;
	else
		if (x > z)
			min = z;
		else
			min = x;

	printf("���� ���� ������ %d�Դϴ�\n", min);

	return 0;
}