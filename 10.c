#include<stdio.h>
int main() {
	double x, y;
	
	printf("��ǥ(x,y): ");
	scanf_s("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("1��и�");
	else if (x < 0 && y>0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else if (x > 0 && y < 0)
		printf("4��и�");
	else
		printf("x�� or y�� or ����");

	return 0;
}