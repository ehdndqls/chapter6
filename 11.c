#include<stdio.h>
int main() {
	char ch;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
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