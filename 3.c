#include<stdio.h>
int main() {
	int x, y, z, min;

	printf("3개의 정수를 입력하시오: ");
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

	printf("제일 작은 정수는 %d입니다\n", min);

	return 0;
}