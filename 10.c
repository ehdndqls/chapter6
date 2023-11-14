#include<stdio.h>
int main() {
	double x, y;
	
	printf("좌표(x,y): ");
	scanf_s("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면");
	else if (x < 0 && y>0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else if (x > 0 && y < 0)
		printf("4사분면");
	else
		printf("x축 or y축 or 원점");

	return 0;
}