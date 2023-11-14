#include<stdio.h>
int main() {
	char ch;
	
	printf("문자를 입력하시오: ");
	ch = getchar();

	if (ch == 'R' || ch == 'r')
		printf("Rectangle");
	else if (ch == 'T' || ch == 't')
		printf("triangle");
	else if (ch == 'C' || ch == 'c')
		printf("Circle");
	else
		printf("Unknown");

	return 0;
}